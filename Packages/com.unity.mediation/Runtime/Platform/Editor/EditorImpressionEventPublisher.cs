#if UNITY_EDITOR
using System;

namespace Unity.Mediation.Platform
{
    class EditorImpressionEventPublisher : IImpressionEventPublisher
    {
#pragma warning disable 67
        public event EventHandler<ImpressionEventArgs> OnImpression;
#pragma warning restore 67
    }
}
#endif
