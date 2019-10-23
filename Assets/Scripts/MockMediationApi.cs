using System.Collections.Generic;

// NOTE: This just mocks out the mediation SDK's interface/classes.
//       Once the medaition SDK is integrated, this should be removed.

namespace UnityEngine.Mediation
{
    public interface IUnityMediationAdUnitListener {
        void OnLoaded(IUnityAdUnit adUnit);
        void OnShown(IUnityAdUnit adUnit);
        void OnClick(IUnityAdUnit adUnit);
        void OnFinished(IUnityAdUnit adUnit);
        void OnFailed(IUnityAdUnit adUnit, int errorCode, string message);
    }

    public class ILoadedAdDetails {
        public string AdapterKey { get; }
        public string PlacementId { get; }
    }

    public class IUnityMediationAdaptor
    {
        public string AdaptorKey { get; }
        public void Initialize(Dictionary<string, object> parameters) {}
        public void LoadInterstitial(IUnityMediationAdUnitListener listener, Dictionary<string, object> parameters) {}
    }

    public class IUnityAdUnit {
        public ILoadedAdDetails loadedAdDetails { get; }
        public IUnityMediationAdUnitListener adUnitListener { get; }

        public void Load() {}
        public void Show() {}
    }
}
