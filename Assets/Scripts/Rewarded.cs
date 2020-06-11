using System;

namespace MediationWrapper
{
    public class Rewarded
    {
        private string adUnitId;
        public Rewarded(string adUnitId)
        {
            if (Mediation.Wrapper == null)
            {
                throw new InvalidOperationException("Ensure Mediation.Initialize() was called first.");
            }
            this.adUnitId = adUnitId;
        }

        public void Load()
        {
            Mediation.Wrapper.Call("LoadRewarded", Mediation.CurrentActivity, Mediation.GameId, adUnitId);
        }

        public void Show()
        {
            Mediation.Wrapper.Call("ShowRewarded");
        }

        public void GetStatus()
        {
            Mediation.Wrapper.Get<string>("Status");
        }
    }
}