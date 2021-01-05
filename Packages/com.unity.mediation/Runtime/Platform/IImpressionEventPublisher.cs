using System;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    interface IImpressionEventPublisher
    {
        event EventHandler<ImpressionEventArgs> OnImpression;
    }
}
