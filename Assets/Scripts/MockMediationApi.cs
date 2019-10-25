using System.Collections.Generic;
using UnityEngine.Advertisements;


// NOTE: This just mocks out the mediation SDK's interface/classes.
//       Once the medaition SDK is integrated, this should be removed.

namespace UnityEngine.Mediation
{
    public class MediationAdapter: IUnityMediationAdaptor, IUnityAdsListener
    {
        #if UNITY_IOS
		private string gameId = "1737343"; // Your iOS game ID here
	    #elif UNITY_ANDROID
		private string gameId = "1737342"; // Your Android game ID here
	    #else
		private string gameId = "0123456"; // Prevents Editor Errors
	    #endif

        private IUnityMediationAdUnitListener _listener;

        public MediationAdapter()
        {
            Debug.Log("MediationAdapter()");
            
        }

        public string AdaptorKey { get; }

        private bool _listenerAdded = false;

        public void Initialize(Dictionary<string, object> parameters) {
            Debug.Log("MediationAdapter.Initialize()");
            
        }

        public void LoadInterstitial(IUnityMediationAdUnitListener listener, Dictionary<string, object> parameters){
            Debug.Log("MediationAdapter.LoadInterstitial()");
            _listener = listener;
            if (!_listenerAdded) {
                IUnityAdUnit adUnit;
                if (Advertisement.IsReady("video"))
                {
                    adUnit = BuildAdUnit(listener);
                    _listener.OnLoaded(adUnit);
                }
                Advertisement.AddListener(this);
                Advertisement.Initialize(this.gameId);
            }
        } 

        public void OnUnityAdsReady(string placementId)
        {
            Debug.LogFormat("MediationAdapter.OnUnityAdsReady({0})", placementId);
            if (placementId != "video") {
                return;
            }

            Debug.LogFormat("MediationAdapter.OnUnityAdsReady({0}): Create AdUnit", placementId);
            var adUnit = new UnityAdUnit(_listener);

            Debug.LogFormat("MediationAdapter.OnUnityAdsReady({0}): Call OnLoaded", placementId);

            if (_listener == null) {
                Debug.LogFormat("MediationAdapter.OnUnityAdsReady({0}): _listener == null", placementId);
            }

            _listener.OnLoaded(adUnit);
        }

        public void OnUnityAdsDidError(string message)
        {
            Debug.LogFormat("MediationAdapter.OnUnityAdsDidError({0})", message);
            // if (placementId != "video") {
            //     return;
            // }
            // _listener.OnFailed()
        }

        public void OnUnityAdsDidStart(string placementId)
        {
            Debug.LogFormat("MediationAdapter.OnUnityAdsDidStart({0})", placementId);
            if (placementId != "video") {
                return;
            }
            // _listener.OnShown()
        }

        public void OnUnityAdsDidFinish(string placementId, ShowResult showResult)
        {
            Debug.LogFormat("MediationAdapter.OnUnityAdsDidFinish({0}, {1})", placementId, showResult.ToString());
            if (placementId != "video") {
                return;
            }
            // _listener.OnFinished()
        }

        private IUnityAdUnit BuildAdUnit(IUnityMediationAdUnitListener listener)
        {
            return new UnityAdUnit(listener);
        }
    }

    public class LoadedAdDetails: ILoadedAdDetails {
        public LoadedAdDetails(string key, string id) {
            Debug.Log("LoadedAdDetails.LoadedAdDetails()");
            AdapterKey = key;
            PlacementId = id;
        }
        public string AdapterKey { get; }
        public string PlacementId { get; }
    }

    public class UnityAdUnit: IUnityAdUnit {

        public UnityAdUnit(IUnityMediationAdUnitListener listener)
        {
            adUnitListener = listener;
        }

        public ILoadedAdDetails loadedAdDetails {
            get {
                var details = new LoadedAdDetails("UnityAds", "video");
                return details;
            }
        }
        public IUnityMediationAdUnitListener adUnitListener { get; }

        public void Load() {
            Debug.Log("UnityAdUnit.Load()");
        }

        public void Show() {
            Debug.Log("UnityAdUnit.Show()");
            Advertisement.Show("video");
        }
    }

// ---------------

    public interface IUnityMediationAdUnitListener {
        void OnLoaded(IUnityAdUnit adUnit);
        void OnShown(IUnityAdUnit adUnit);
        void OnClick(IUnityAdUnit adUnit);
        void OnFinished(IUnityAdUnit adUnit);
        void OnFailed(IUnityAdUnit adUnit, int errorCode, string message);
    }

    public interface IUnityMediationAdaptor
    {
        string AdaptorKey { get; }
        void Initialize(Dictionary<string, object> parameters);
        void LoadInterstitial(IUnityMediationAdUnitListener listener, Dictionary<string, object> parameters);
    }

    public interface ILoadedAdDetails {
        string AdapterKey { get; }
        string PlacementId { get; }
    }
    
    public interface IUnityAdUnit {
         ILoadedAdDetails loadedAdDetails { get; }
         IUnityMediationAdUnitListener adUnitListener { get; }
         void Load();
         void Show();
    }
}
