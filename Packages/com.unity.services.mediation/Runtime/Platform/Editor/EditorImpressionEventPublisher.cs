#if UNITY_EDITOR
using System;
using UnityEngine;

namespace Unity.Services.Mediation.Platform
{
    class EditorImpressionEventPublisher : IImpressionEventPublisher, IExternallyInvokableEventPublisher
    {
#pragma warning disable 67
        public event EventHandler<ImpressionEventArgs> OnImpression;
#pragma warning restore 67

        public EditorImpressionEventPublisher()
        {
            OnImpression += (sender, args) => Debug.Log($"<b>Unity Mediation:</b> <color=green>Impression Event Fired:</color> {args.AdUnitId}");
        }

        public void InvokeOnImpressionEvent(object sender, ImpressionEventArgs args)
        {
            OnImpression?.Invoke(sender, args);
        }
    }
}
#endif
