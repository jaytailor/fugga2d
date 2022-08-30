using System;
using System.Collections.Generic;
using System.Reflection;
using NUnit.Framework;

namespace Unity.Services.Mediation.Tests
{
    public class EventArgsTests
    {
        [Test]
        [TestCase(nameof(LoadErrorEventArgs))]
        [TestCase(nameof(ShowErrorEventArgs))]
        [TestCase(nameof(InitializationErrorEventArgs))]
        public void ErrorEventArgsPropertyTest(string eventType)
        {
            string message = "test string";

            switch (eventType)
            {
                case nameof(LoadErrorEventArgs):
                {
                    var evtArg = new LoadErrorEventArgs(LoadError.Unknown, message);
                    Assert.AreEqual("Unknown", evtArg.Error.ToString(), "Event Enum Mismatch");
                    Assert.AreEqual(message, evtArg.Message, "Event Error Message Mismatch");
                } break;

                case nameof(ShowErrorEventArgs):
                {
                    var evtArg = new ShowErrorEventArgs(ShowError.Unknown, message);
                    Assert.AreEqual("Unknown", evtArg.Error.ToString(), "Event Enum Mismatch");
                    Assert.AreEqual(message, evtArg.Message, "Event Error Message Mismatch");
                } break;

                case nameof(InitializationErrorEventArgs):
                {
                    var evtArg = new InitializationErrorEventArgs(SdkInitializationError.Unknown, message);
                    Assert.AreEqual("Unknown", evtArg.Error.ToString(), "Event Enum Mismatch");
                    Assert.AreEqual(message, evtArg.Message, "Event Error Message Mismatch");
                } break;
            }
        }

        [Test]
        public void ImpressionEventArgsPropertyTest()
        {
            ImpressionData data = new ImpressionData();
            string adUnit = "test";

            ImpressionEventArgs eventArgs = new ImpressionEventArgs(adUnit, data);

            Assert.AreEqual(data, eventArgs.ImpressionData, "Event Data Mismatch");
            Assert.AreEqual(adUnit, eventArgs.AdUnitId, "Event Ad Unit Id Mismatch");
        }

        [Test]
        public void RewardEventArgsPropertyTest()
        {
            string type = "test";
            string amount = "5.0";

            RewardEventArgs eventArgs = new RewardEventArgs(type, amount);

            Assert.AreEqual(type, eventArgs.Type, "Event Data Mismatch");
            Assert.AreEqual(amount, eventArgs.Amount, "Event Ad Unit Id Mismatch");
        }
    }
}
