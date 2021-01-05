#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using System.Reflection;
using Moq;
using UnityEngine;

namespace Unity.Mediation.Tests
{
    public class MockedStaticEvent<T> where T : class
    {
        public readonly Mock<T> mockedObject;
        public readonly Type classType;
        public readonly string eventName;
        public readonly EventArgs eventArgs;

        public bool RealEventFired { get; private set; }
        public object RealEventFiredSender { get; private set; }
        public EventArgs RealEventFiredArgs { get; private set; }

        Delegate m_Handler;

        public MockedStaticEvent(Mock<T> mockedObject, Type classType, string eventName, EventArgs eventArgs)
        {
            this.mockedObject = mockedObject;
            this.classType = classType;
            this.eventName = eventName;
            this.eventArgs = eventArgs;

            RealEventFired = false;
            RealEventFiredSender = null;
            RealEventFiredArgs = null;
        }

        public void SubscribeToRealEvent()
        {
            if (m_Handler != null)
            {
                throw new InvalidOperationException("MockedStaticEvent can only subscribe to event once.");
            }
            EventInfo eventInfo = classType.GetEvent(eventName);
            var methodInfo = typeof(MockedStaticEvent<T>).GetMethod("onEventFired", BindingFlags.NonPublic | BindingFlags.Instance);
            m_Handler = Delegate.CreateDelegate(eventInfo.EventHandlerType, this, methodInfo);
            eventInfo.AddEventHandler(null, m_Handler);
        }

        public void UnsubscribeFromRealEvent()
        {
            if (m_Handler == null) return;
            EventInfo eventInfo = classType.GetEvent(eventName);
            eventInfo.RemoveEventHandler(null, m_Handler);
            m_Handler = null;
        }

        public void RaiseMockedEvent()
        {
            var evName = eventName;
            mockedObject.Raise(o => typeof(T).GetEvent(evName).AddEventHandler(o, null), null, eventArgs);
        }

        void onEventFired(object sender, EventArgs eventArgs)
        {
            RealEventFired = true;
            RealEventFiredSender = sender;
            RealEventFiredArgs = eventArgs;
        }

        ~MockedStaticEvent()
        {
            if (m_Handler != null)
            {
                Debug.LogWarning("Did not unsubscribe from event. Call UnsubscribeFromRealEvent() to avoid inconsistencies with event testing.");
            }
        }
    }
}
#endif
