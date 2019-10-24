using System.Collections;
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
    private ImageMessage _imageMessage;

    private bool shouldShowPromo = false;

    private bool _ready = false;

    public void Show() {
        if (!_ready) {
            return;
        }

        if (_adUnit == null && _imageMessage == null) {
            return;
        }

        if (_imageMessage != null) {
            _imageMessage.Show();
            return;
        }
        
        _adUnit.Show();
    }

    public bool Ready() {
        return _ready;
    }

    public void OnLoaded(IUnityAdUnit adUnit)
    {
        DDNA.Instance.RecordEvent(new GameEvent("adUnitOnLoaded")
            .AddParam("eventName", "rcs"))
			.Add(new ImageMessageHandler(DDNA.Instance, imageMessage => {
                _imageMessage = imageMessage;
			}))
			.Run();
        _adUnit = adUnit;
        _ready = true;	
    }

    public void OnShown(IUnityAdUnit adUnit)
    {
        var gameEvent = new GameEvent("adUnitOnShown")
            .AddParam("AdapterKey", adUnit.loadedAdDetails.AdapterKey);
	    DDNA.Instance.RecordEvent(gameEvent).Run();
    }

    public void OnClick(IUnityAdUnit adUnit)
    {
        var gameEvent = new GameEvent("adUnitOnClick")
            .AddParam("AdapterKey", adUnit.loadedAdDetails.AdapterKey);
	    DDNA.Instance.RecordEvent(gameEvent).Run(); 
    }

    public void OnFinished(IUnityAdUnit adUnit)
    {
        var gameEvent = new GameEvent("adUnitFinished")
            .AddParam("AdapterKey", adUnit.loadedAdDetails.AdapterKey);
	    DDNA.Instance.RecordEvent(gameEvent).Run();                
    }

    const int ERROR_LOADING_AD_UNIT = 42;

    public void OnFailed(IUnityAdUnit adUnit, int errorCode, string message)
    {
        DDNA.Instance.RecordEvent(new GameEvent("adUnitError")
            .AddParam("AdapterKey", adUnit.loadedAdDetails.AdapterKey)
            .AddParam("errorCode", errorCode))
			.Add(new ImageMessageHandler(DDNA.Instance, imageMessage => {
                Debug.Log("adUnit error");
                // the image message is already prepared so it will show instantly
				imageMessage.Show();
			}))
			.Run();
    }
}
