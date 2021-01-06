using System;
using Unity.Mediation.Platform;

namespace Unity.Mediation
{
    /// <summary>
    /// Static class that can receive events when impression events are fired from ad objects.
    /// </summary>
    public static class ImpressionEventPublisher
    {
        internal static IImpressionEventPublisher ImpressionEventPublisherImpl;

        /// <summary>
        /// Event to subscribe to when listening for impression events.
        /// </summary>
        public static event EventHandler<ImpressionEventArgs> OnImpression
        {
            add => ImpressionEventPublisherImpl.OnImpression += value;
            remove => ImpressionEventPublisherImpl.OnImpression -= value;
        }

        static ImpressionEventPublisher()
        {
#if UNITY_EDITOR
            ImpressionEventPublisherImpl = new EditorImpressionEventPublisher();
#elif UNITY_ANDROID
            ImpressionEventPublisherImpl = new AndroidImpressionEventPublisher();
#elif UNITY_IOS
            ImpressionEventPublisherImpl = new IosImpressionEventPublisher();
#else
            ImpressionEventPublisherImpl = new UnsupportedImpressionEventPublisher();
#endif
        }
    }
}
