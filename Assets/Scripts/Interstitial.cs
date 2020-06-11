using System;

namespace MediationWrapper
{
    public class Interstitial
    {
        private string adUnitId;
        public Interstitial(string adUnitId)
        {
            if (Mediation.Wrapper == null)
            {
                throw new InvalidOperationException("Ensure Mediation.Initialize() was called first.");
            }
            this.adUnitId = adUnitId;
        }

        public void Load()
        {
            Mediation.Wrapper.Call("LoadInterstitial", Mediation.CurrentActivity, Mediation.GameId, adUnitId);
        }

        public void Show()
        {
            Mediation.Wrapper.Call("ShowInterstitial");
        }

        public void GetStatus()
        {
            Mediation.Wrapper.Get<string>("Status");
        }
    }
}