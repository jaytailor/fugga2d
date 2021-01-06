#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using System.Reflection;
using Moq;
using UnityEngine;

namespace Unity.Mediation.Tests
{
    public class MockedEvent<T> where T : class
    {
        public readonly Mock<T> mockedObject;
        public readonly object obj;
        public readonly string eventName;
        public readonly EventArgs eventArgs;

        public bool RealEventFired { get; private set; }
        public object RealEventFiredSender { get; private set; }
        public EventArgs RealEventFiredArgs { get; private set; }

        Delegate m_Handler;

        public MockedEvent(Mock<T> mockedObject, object obj, string eventName, EventArgs eventArgs)
        {
            this.mockedObject = mockedObject;
            this.obj = obj;
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
                throw new InvalidOperationException("MockedEvent can only subscribe to event once.");
            }
            EventInfo eventInfo = obj.GetType().GetEvent(eventName);
            var methodInfo = typeof(MockedEvent<T>).GetMethod("onEventFired", BindingFlags.NonPublic | BindingFlags.Instance);
            m_Handler = Delegate.CreateDelegate(eventInfo.EventHandlerType, this, methodInfo);
            eventInfo.AddEventHandler(obj, m_Handler);
        }

        public void UnsubscribeFromRealEvent()
        {
            if (m_Handler == null) return;
            EventInfo eventInfo = obj.GetType().GetEvent(eventName);
            eventInfo.RemoveEventHandler(obj, m_Handler);
            m_Handler = null;
        }

        public void RaiseMockedEvent()
        {
            var evName = eventName;
            mockedObject.Raise(o => typeof(T).GetEvent(evName).AddEventHandler(o, null), eventArgs);
        }

        void onEventFired(object sender, EventArgs eventArgs)
        {
            RealEventFired = true;
            RealEventFiredSender = sender;
            RealEventFiredArgs = eventArgs;
        }

        ~MockedEvent()
        {
            if (m_Handler != null)
            {
                Debug.LogWarning("Did not unsubscribe from event. Call UnsubscribeFromRealEvent() to avoid inconsistencies with event testing.");
            }
        }
    }
}
#endif
