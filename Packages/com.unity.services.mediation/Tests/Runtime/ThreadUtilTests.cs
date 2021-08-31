#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using System.Threading;
using Moq;
using NUnit.Framework;
using Unity.Services.Mediation.Platform;
using UnityEngine;

namespace Unity.Services.Mediation.Tests
{
    public class ThreadUtilTests
    {
        SynchronizationContext m_OriginalContext;
        Mock<SynchronizationContext> m_SynchronizationContextMock;

        [OneTimeSetUp]
        public void Setup()
        {
            m_OriginalContext = ThreadUtil.UnitySynchronizationContext;
            m_SynchronizationContextMock = new Mock<SynchronizationContext>(MockBehavior.Strict);
            ThreadUtil.UnitySynchronizationContext = m_SynchronizationContextMock.Object;
        }

        [OneTimeTearDown]
        public void TearDown()
        {
            ThreadUtil.UnitySynchronizationContext = m_OriginalContext;
        }

        [Test]
        public void UnityThreadContextTest()
        {
            // This ensures that the original thread on ThreadUtil matches the main Unity thread.
            // Since this test runs on the main Unity thread, we can get the current context.
            Assert.AreEqual(SynchronizationContext.Current, m_OriginalContext, "UnitySynchronizationContext doesn't match between current thread and ThreadUtil");
        }

        [Test]
        public void PostTest()
        {
            var state = new object();
            var callback = new SendOrPostCallback(s =>
            {
                Assert.AreEqual(state, s, "State of SendOrPostCallback do not match");
            });

            m_SynchronizationContextMock
                .Setup(context => context.Post(callback, state))
                .Callback(() => callback(state));

            ThreadUtil.Post(callback, state);
            m_SynchronizationContextMock.Verify(context => context.Post(callback, state));
        }

        [Test]
        public void SendTest()
        {
            var state = new object();
            var callback = new SendOrPostCallback(s =>
            {
                Assert.AreEqual(state, s, "State of SendOrPostCallback do not match");
            });

            m_SynchronizationContextMock
                .Setup(context => context.Send(callback, state))
                .Callback(() => callback(state));

            ThreadUtil.Send(callback, state);
            m_SynchronizationContextMock.Verify(context => context.Send(callback, state));
        }
    }
}
#endif
