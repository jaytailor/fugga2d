using System;
using UnityEngine;

namespace Unity.Mediation.Samples
{
    /// <summary>
    /// Sample Implementation of Unity Mediation
    /// </summary>
    public class RewardedExample : MonoBehaviour
    {
        public string gameId;
        public string androidAdUnitId;
        public string iosAdUnitId;

        RewardedAd m_RewardedAd;

        void Start()
        {
            // Initialization Events
            UnityMediation.OnInitializationComplete += InitializationComplete;
            UnityMediation.OnInitializationFailed   += InitializationFailed;

            if (Application.platform == RuntimePlatform.Android)
            {
                m_RewardedAd = new RewardedAd(gameId, androidAdUnitId);
            }
            else
            {
                m_RewardedAd = new RewardedAd(gameId, iosAdUnitId);
            }

            // Load Events
            m_RewardedAd.OnLoaded += AdLoaded;
            m_RewardedAd.OnFailedLoad += AdFailedLoad;

            // Show Events
            m_RewardedAd.OnUserRewarded += UserRewarded;
            m_RewardedAd.OnShowed += AdShown;
            m_RewardedAd.OnFailedShow += AdFailedShow;

            // Impression Event
            ImpressionEventPublisher.OnImpression += ImpressionEvent;

            UnityMediation.Initialize(gameId);

            Debug.Log("Initializing...");
        }

        public void ShowRewarded()
        {
            if (m_RewardedAd.AdState == AdState.Loaded)
            {
                m_RewardedAd.Show();
            }
        }

        void LoadAd()
        {
            m_RewardedAd.Load();
        }

        void InitializationComplete(object sender, EventArgs args)
        {
            UnityMediation.OnInitializationComplete -= InitializationComplete;
            LoadAd();
            Debug.Log("Initialized On Start");
        }
        void InitializationFailed(object sender, EventArgs args)
        {
            Debug.Log("Initialization Failed");
        }

        void AdLoaded(object sender, EventArgs sargs)
        {
            Debug.Log("Loaded Rewarded!");
        }
        void AdFailedLoad(object sender, LoadErrorEventArgs args)
        {
            Debug.Log("Rewarded Load Failure");
            Debug.Log(args.Message);
        }

        void UserRewarded(object sender, RewardEventArgs e)
        {
            Debug.Log($"User Rewarded! Type: {e.Type} Amount: {e.Amount}");
        }

        void AdShown(object sender, EventArgs args)
        {
            LoadAd();
            Debug.Log("Rewarded Shown!");
        }
        void AdFailedShow(object sender, ShowErrorEventArgs args)
        {
            Debug.Log(args.Message);
        }

        void ImpressionEvent(object sender, ImpressionEventArgs args)
        {
            var impressionData = args.ImpressionData != null ? JsonUtility.ToJson(args.ImpressionData, true) : "null";
            Debug.Log($"Impression event from ad unit id {args.AdUnitId} : {impressionData}");
        }
    }
}
