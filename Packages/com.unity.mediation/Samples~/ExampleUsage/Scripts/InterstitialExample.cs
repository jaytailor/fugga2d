using System;
using UnityEngine;

namespace Unity.Mediation.Samples
{
    /// <summary>
    /// Sample Implementation of Unity Mediation
    /// </summary>
    public class InterstitialExample : MonoBehaviour
    {
        public string gameId;
        public string androidAdUnitId;
        public string iosAdUnitId;

        InterstitialAd m_InterstitialAd;

        void Start()
        {
            // Initialization Events
            UnityMediation.OnInitializationComplete += InitializationComplete;
            UnityMediation.OnInitializationFailed   += InitializationFailed;

            if (Application.platform == RuntimePlatform.Android)
            {
                m_InterstitialAd = new InterstitialAd(androidAdUnitId);
            }
            else
            {
                m_InterstitialAd = new InterstitialAd(iosAdUnitId);
            }

            // Load Events
            m_InterstitialAd.OnLoaded += AdLoaded;
            m_InterstitialAd.OnFailedLoad += AdFailedLoad;

            // Show Events
            m_InterstitialAd.OnClosed += AdClosed;
            m_InterstitialAd.OnShowed += AdShown;
            m_InterstitialAd.OnFailedShow += AdFailedShow;

            // Impression Event
            ImpressionEventPublisher.OnImpression += ImpressionEvent;

            UnityMediation.Initialize(gameId);

            Debug.Log("Initializing...");
        }

        public void ShowInterstitial()
        {
            if (m_InterstitialAd.AdState == AdState.Loaded)
            {
                m_InterstitialAd.Show();
            }
        }

        void LoadAd()
        {
            m_InterstitialAd.Load();
        }

        void InitializationComplete(object sender, EventArgs args)
        {
            UnityMediation.OnInitializationComplete -= InitializationComplete;
            Debug.Log("Initialized On Start! Loading Ad...");
            LoadAd();
        }

        void InitializationFailed(object sender, EventArgs args)
        {
            Debug.Log("Initialization Failed");
        }

        void AdLoaded(object sender, EventArgs sargs)
        {
            Debug.Log("Loaded Interstitial!");
        }

        void AdFailedLoad(object sender, LoadErrorEventArgs args)
        {
            Debug.Log("Interstitial Load Failure");
            Debug.Log(args.Message);
        }

        void AdClosed(object sender, EventArgs args)
        {
            Debug.Log("Interstitial Closed! Loading Ad...");
            LoadAd();
        }

        void AdShown(object sender, EventArgs e)
        {
            Debug.Log("Interstitial Shown!");
        }

        void AdFailedShow(object sender, ShowErrorEventArgs args)
        {
            Debug.Log($"Interstitial failed to show : {args.Message}");
        }

        void ImpressionEvent(object sender, ImpressionEventArgs args)
        {
            var impressionData = args.ImpressionData != null ? JsonUtility.ToJson(args.ImpressionData, true) : "null";
            Debug.Log($"Impression event from ad unit id {args.AdUnitId} : {impressionData}");
        }
    }
}
