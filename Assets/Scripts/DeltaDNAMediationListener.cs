﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Mediation;
using DeltaDNA;

// var handler = MediationListener();
// adapter.LoadInterstitial(handler, null);

// TODO: consider alternate names.
public class DeltaDNAMediationListener: IUnityMediationAdUnitListener
{
    private IUnityAdUnit _adUnit;

    private bool shouldShowPromo = false;

    private bool _ready = false;

    private ImageMessage _imageMessage;

    public DeltaDNAMediationListener()
    {
        DDNA.Instance.Settings.DefaultImageMessageHandler =
			new ImageMessageHandler(DDNA.Instance, imageMessage => {
				// do something with the image message
                Debug.LogFormat("PROMO READY: {0}", imageMessage);
				_imageMessage = imageMessage;  
			});
    }

    public void Show() {
        Debug.Log("DeltaDNAMediationListener.Show()");
        if (!_ready && _imageMessage == null) {
            Debug.Log("DeltaDNAMediationListener.Show: !_ready && _imageMessage == null");
            return;
        }

        if (_adUnit == null && _imageMessage == null) {
            Debug.Log("DeltaDNAMediationListener.Show: _adUnit == null && _imageMessage == null");
            return;
        }

        if (_imageMessage != null) {
            Debug.Log("DeltaDNAMediationListener.Show: _imageMessage != null");
            _imageMessage.Show();
            _imageMessage = null;
            // TODO: MOVE the following to the handler for ^^^ show call.
            var gameEvent = new GameEvent("ddnaOnShown")
                .AddParam("adNetwork", _adUnit.loadedAdDetails.AdapterKey)
                .AddParam("creativeId", "creative-id") // TODO
                .AddParam("creativeType", "creative-type") // TODO
                .AddParam("floorECPM", 500.0) // TODO
                .AddParam("placementId", _adUnit.loadedAdDetails.PlacementId);
            return;
        }
        
        Debug.Log("DeltaDNAMediationListener.Show: _adUnit.Show()");
        _adUnit.Show();
    }

    public bool Ready() {
        return _ready;
    }

    public void OnLoaded(IUnityAdUnit adUnit)
    {
        DDNA.Instance.RecordEvent(new GameEvent("adUnitOnLoaded")
            .AddParam("adNetwork", adUnit.loadedAdDetails.AdapterKey)
            .AddParam("creativeId", "creative-id") // TODO
            .AddParam("creativeType", "creative-type") // TODO
            .AddParam("floorECPM", 500.0) // TODO
            .AddParam("placementId", adUnit.loadedAdDetails.PlacementId))
			.Run();
        _adUnit = adUnit;
        _ready = true;	
    }

    public void OnShown(IUnityAdUnit adUnit)
    {
        var gameEvent = new GameEvent("adUnitOnShown")
            .AddParam("adNetwork", adUnit.loadedAdDetails.AdapterKey)
            .AddParam("creativeId", "creative-id") // TODO
            .AddParam("creativeType", "creative-type") // TODO
            .AddParam("floorECPM", 500.0) // TODO
            .AddParam("placementId", adUnit.loadedAdDetails.PlacementId);
	    DDNA.Instance.RecordEvent(gameEvent).Run();
    }

    public void OnClick(IUnityAdUnit adUnit)
    {
        var gameEvent = new GameEvent("adUnitOnClick")
            .AddParam("adNetwork", adUnit.loadedAdDetails.AdapterKey)
            .AddParam("creativeId", "creative-id") // TODO
            .AddParam("creativeType", "creative-type") // TODO
            .AddParam("floorECPM", 500.0) // TODO
            .AddParam("placementId", adUnit.loadedAdDetails.PlacementId);
	    DDNA.Instance.RecordEvent(gameEvent).Run(); 
    }

    public void OnFinished(IUnityAdUnit adUnit)
    {
        var gameEvent = new GameEvent("adUnitOnFinished")
            .AddParam("adNetwork", adUnit.loadedAdDetails.AdapterKey)
            .AddParam("creativeId", "creative-id") // TODO
            .AddParam("creativeType", "creative-type") // TODO
            .AddParam("floorECPM", 500.0) // TODO
            .AddParam("placementId", adUnit.loadedAdDetails.PlacementId);
	    DDNA.Instance.RecordEvent(gameEvent).Run();          
    }

    const int ERROR_LOADING_AD_UNIT = 42;

    public void OnFailed(IUnityAdUnit adUnit, int errorCode, string message)
    {
        DDNA.Instance.RecordEvent(new GameEvent("adUnitOnFailed")
            .AddParam("adNetwork", adUnit.loadedAdDetails.AdapterKey)
            .AddParam("creativeId", "creative-id") // TODO
            .AddParam("creativeType", "creative-type") // TODO
            .AddParam("floorECPM", 500.0) // TODO
            .AddParam("placementId", adUnit.loadedAdDetails.PlacementId)
            .AddParam("errorCode", errorCode))
			.Add(new ImageMessageHandler(DDNA.Instance, imageMessage => {
                Debug.Log("adUnit error");
                // the image message is already prepared so it will show instantly
				imageMessage.Show();
                // TODO: MOVE the following to the handler for ^^^ show call.
                var gameEvent = new GameEvent("ddnaOnShown")
                    .AddParam("adNetwork", _adUnit.loadedAdDetails.AdapterKey)
                    .AddParam("creativeId", "creative-id") // TODO
                    .AddParam("creativeType", "creative-type") // TODO
                    .AddParam("floorECPM", 500.0) // TODO
                    .AddParam("placementId", _adUnit.loadedAdDetails.PlacementId);
			}))
			.Run();
    }
}
