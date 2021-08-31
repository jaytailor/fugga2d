using System;

namespace Unity.Services.Mediation
{
    /// <summary>
    /// Enum for Mediation SDK load error codes to be surfaced to the developer.<para/>
    ///
    /// <para>NoFill: Error that occurs when the sdk fails to load an ad for an entire waterfall. </para>
    ///
    /// <para>NetworkError: Error that occurs when the Mediation SDK InstantiationService call fails.</para>
    ///
    /// <para>Unknown: This occurs if a non-network error happens during instantiation service load.</para>
    /// </summary>
    public enum LoadError
    {
        /// <summary>
        /// This occurs if a non-network error happens during instantiation service load.
        /// </summary>
        Unknown,

        /// <summary>
        /// Error that occurs when the SDK fails to load an ad for an entire waterfall.
        /// </summary>
        NoFill,

        /// <summary>
        /// Error that occurs when the Mediation SDK InstantiationService call fails.
        /// </summary>
        NetworkError,

        /// <summary>
        /// Error that occurs when an ad unit failed to load because the SDK was not initialized.
        /// </summary>
        SdkNotInitialized
    }
}
