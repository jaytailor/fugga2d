using System;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;

namespace Unity.Mediation.Tests
{
    public class EventArgsTests
    {
        [Test]
        [TestCase(nameof(LoadErrorEventArgs))]
        [TestCase(nameof(ShowErrorEventArgs))]
        [TestCase(nameof(InitializationErrorEventArgs))]
        public void ErrorEventArgsPropertyTest(string eventName)
        {
            string message = "test string";

            Dictionary<string, EventArgs> eventArgs = new Dictionary<string, EventArgs>()
            {
                { nameof(LoadErrorEventArgs), new LoadErrorEventArgs(LoadError.Unknown, message) },
                { nameof(ShowErrorEventArgs), new ShowErrorEventArgs(ShowError.Unknown, message) },
                { nameof(InitializationErrorEventArgs), new InitializationErrorEventArgs(SdkInitializationError.Unknown, message) }
            };

            Type type = eventArgs[eventName].GetType();
            Assert.AreEqual("Unknown", type.GetProperty("Error")?.GetValue(eventArgs[eventName]).ToString(), "Event Enum Mismatch");
            Assert.AreEqual(message, type.GetProperty("Message")?.GetValue(eventArgs[eventName]), "Event Error Message Mismatch");
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
