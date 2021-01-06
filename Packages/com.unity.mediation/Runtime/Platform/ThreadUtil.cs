using System;
using System.Threading;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    static class ThreadUtil
    {
        internal static SynchronizationContext UnitySynchronizationContext;

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static void Init()
        {
            UnitySynchronizationContext = SynchronizationContext.Current;
        }

        public static void Post(SendOrPostCallback d, object state = null)
        {
            UnitySynchronizationContext.Post(d, state);
        }

        public static void Send(SendOrPostCallback d, object state = null)
        {
            UnitySynchronizationContext.Send(d, state);
        }
    }
}
