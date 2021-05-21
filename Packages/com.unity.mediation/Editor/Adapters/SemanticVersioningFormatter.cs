using System;
using UnityEngine;

namespace Unity.Mediation.Adapters.Editor
{
    public interface ISemanticVersioningFormatter
    {
        string OptimisticVersion(string version);

        string LatestVersionIdentifier();
    }

    public enum SemanticVersioningType
    {
        CocoaPods,
        Maven
    }

    public static class SemanticVersioningFactory
    {
        public static ISemanticVersioningFormatter Formatter(SemanticVersioningType type)
        {
            switch (type)
            {
                case SemanticVersioningType.CocoaPods:
                    return new CocoapodsSemanticVersioningFormatter();
                case SemanticVersioningType.Maven:
                    return new MavenSemanticVersioningFormatter();
                default:
                    return new UnknownSemanticVersioningFormatter();
            }
        }
    }

    class CocoapodsSemanticVersioningFormatter : ISemanticVersioningFormatter
    {
        /// <summary>
        /// Version Identifier that represents the latest compatible version for iOS.
        /// </summary>
        const string k_LatestVersionIdentifier = "";

        public string OptimisticVersion(string version)
        {
            return "~> " + version + ".0";
        }

        public string LatestVersionIdentifier()
        {
            return k_LatestVersionIdentifier;
        }
    }

    class MavenSemanticVersioningFormatter : ISemanticVersioningFormatter
    {

        /// <summary>
        /// Version Identifier that represents the latest compatible version for Android.
        /// </summary>
        const string k_LatestVersionIdentifier = "+";

        public string OptimisticVersion(string version)
        {
            return version + ".+";
        }

        public string LatestVersionIdentifier()
        {
            return k_LatestVersionIdentifier;
        }
    }

    class UnknownSemanticVersioningFormatter : ISemanticVersioningFormatter
    {
        public string OptimisticVersion(string version)
        {
            throw new NotImplementedException();
        }

        public string LatestVersionIdentifier()
        {
            throw new NotImplementedException();
        }
    }
}
