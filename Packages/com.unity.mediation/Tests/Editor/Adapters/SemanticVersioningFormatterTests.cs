#if NUGET_MOQ_AVAILABLE
using System;
using System.Collections.Generic;
using System.IO;
using Moq;
using NUnit.Framework;
using Unity.Mediation.Adapters.Editor;
using UnityEditor;

namespace Unity.Mediation.EditorTests
{
    public class SemanticVersioningFormatterTests
    {
        [Test]
        public void CocoapodsLatestVersionTest()
        {
            var latestVersion = SemanticVersioningFactory.Formatter(SemanticVersioningType.CocoaPods).LatestVersionIdentifier();
            Assert.AreEqual(latestVersion, "", "SemanticVersioningFormatter is not returning the right value");
        }

        [Test]
        public void MavenLatestVersionTest()
        {
            var latestVersion = SemanticVersioningFactory.Formatter(SemanticVersioningType.Maven).LatestVersionIdentifier();
            Assert.AreEqual(latestVersion, "+", "SemanticVersioningFormatter is not returning the right value");
        }

        [Test]
        [TestCase("0.1", "0.1.+")]
        [TestCase("1", "1.+")]
        [TestCase("5.6", "5.6.+")]
        [TestCase("7.0.0", "7.0.0.+")]
        public void MavenOptimisticVersionTest(string version, string expectedOptimisticVersion)
        {
            var optimisticVersion = SemanticVersioningFactory.Formatter(SemanticVersioningType.Maven).OptimisticVersion(version);
            Assert.AreEqual(optimisticVersion, expectedOptimisticVersion, "SemanticVersioningFormatter is not returning the right value");
        }

        [Test]
        [TestCase("0.1", "~> 0.1.0")]
        [TestCase("1", "~> 1.0")]
        [TestCase("5.6", "~> 5.6.0")]
        [TestCase("7.0.0", "~> 7.0.0.0")]
        public void CocoapodsOptimisticVersionTest(string version, string expectedOptimisticVersion)
        {
            var optimisticVersion = SemanticVersioningFactory.Formatter(SemanticVersioningType.CocoaPods).OptimisticVersion(version);
            Assert.AreEqual(optimisticVersion, expectedOptimisticVersion, "SemanticVersioningFormatter is not returning the right value");
        }
    }
}
#endif
