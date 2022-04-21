#if UNITY_ANDROID
using System;
using UnityEngine;

namespace Unity.Services.Mediation.Platform
{
    class AndroidBannerAd : IPlatformBannerAd, IAndroidBannerAdListener
    {
        const string k_AndroidSizeClassName = "com.unity3d.mediation.BannerAdViewSize";

        public event EventHandler OnLoaded;
        public event EventHandler<LoadErrorEventArgs> OnFailedLoad;
        public event EventHandler OnClicked;
        public event EventHandler<LoadErrorEventArgs> OnRefreshed;

        public AdState AdState
        {
            get
            {
                if (CheckDisposedAndLogError("Cannot call AdState")) return AdState.Unloaded;
                try
                {
                    using (var state = m_BannerAd.Call<AndroidJavaObject>("getAdState"))
                    {
                        return state.ToEnum<AdState>();
                    }
                }
                catch (Exception e)
                {
                    Debug.LogException(e);
                    return AdState.Unloaded;
                }
            }
        }

        public string AdUnitId
        {
            get
            {
                if (CheckDisposedAndLogError("Cannot call AdUnitId")) return null;
                try
                {
                    return m_BannerAd.Call<string>("getAdUnitId");
                }
                catch (Exception e)
                {
                    Debug.LogException(e);
                    return null;
                }
            }
        }

        public BannerAdSize Size => m_BannerAdSize;

        AndroidJavaObject m_BannerAd;
        BannerAdSize m_BannerAdSize;
        IAndroidBannerAdListener m_BannerAdListener;

        volatile bool m_Disposed;

        public AndroidBannerAd(string adUnitId, BannerAdSize size, BannerAdAnchor anchor = BannerAdAnchor.Default, Vector2 positionOffset = new Vector2())
        {
            ThreadUtil.Send(state =>
            {
                try
                {
                    if (m_BannerAdListener == null)
                    {
                        m_BannerAdListener = new AndroidBannerAdListener(this);
                    }

                    m_BannerAdSize = size;

                    using (var activity = ActivityUtil.GetUnityActivity())
                    {
                        AndroidJavaObject androidSize = new AndroidJavaObject(k_AndroidSizeClassName, size.Width, size.Height);

                        m_BannerAd = new AndroidJavaObject("com.unity3d.mediation.BannerAd",
                            activity, adUnitId, androidSize, m_BannerAdListener);
                    }
                }
                catch (Exception e)
                {
                    Debug.LogError("Error while creating Banner Ad. Banner Ad will not load. " +
                        "Please check your build settings, and make sure Mediation SDK is integrated properly.");
                    Debug.LogException(e);
                }

                SetPosition(anchor, positionOffset);
            });
        }

        public void SetPosition(BannerAdAnchor anchor, Vector2 positionOffset = new Vector2())
        {
            m_BannerAd.Call("setPosition", Convert.ToInt32(anchor), (int)positionOffset.x, (int)positionOffset.y);
        }

        public void Load()
        {
            m_BannerAd.Call("load");
        }

        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        public void onBannerAdViewLoaded(AndroidJavaObject bannerAd)
        {
            OnLoaded?.Invoke(this, EventArgs.Empty);
        }

        public void onBannerAdViewFailedLoad(AndroidJavaObject bannerAd, AndroidJavaObject error, string msg)
        {
            OnFailedLoad?.Invoke(this, new LoadErrorEventArgs(error.ToEnum<LoadError>(), msg));
        }

        public void onBannerAdViewClicked(AndroidJavaObject bannerAd)
        {
            OnClicked?.Invoke(this, EventArgs.Empty);
        }

        ~AndroidBannerAd()
        {
            Dispose(false);
        }

        void Dispose(bool disposing)
        {
            if (m_Disposed) return;
            m_Disposed = true;
            if (disposing)
            {
                //AndroidJavaObjects are created and destroyed with JNI's NewGlobalRef and DeleteGlobalRef,
                //Therefore must be used on the same attached thread. In this case, it's Unity thread.
                ThreadUtil.Post(state =>
                {
                    m_BannerAd?.Dispose();
                    m_BannerAdListener = null;
                    m_BannerAd = null;
                });
            }
        }

        bool CheckDisposedAndLogError(string message)
        {
            if (!m_Disposed) return false;
            Debug.LogErrorFormat("Unity Mediation SDK: {0}: Instance of type {1} is disposed. Please create a new instance in order to call any method.", message, GetType().FullName);
            return true;
        }
    }
}
#endif
