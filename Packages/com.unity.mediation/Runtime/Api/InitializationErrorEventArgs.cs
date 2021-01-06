using System;

namespace Unity.Mediation
{
    /// <summary>
    /// InitializationError Event Arguments
    /// </summary>
    public class InitializationErrorEventArgs : EventArgs
    {
        /// <summary>
        /// Initialization error reported by underlying SDK
        /// </summary>
        public SdkInitializationError Error { get; }

        /// <summary>
        /// Error message reported by underlying SDK
        /// </summary>
        public string Message { get; }

        /// <summary>
        /// Constructs Arguments for Initialization Errors
        /// </summary>
        /// <param name="error">Underlying SDK Initialization Error Enum</param>
        /// <param name="message">Underlying SDK Initialization Error Message</param>
        public InitializationErrorEventArgs(SdkInitializationError error, string message)
        {
            Error = error;
            Message = message;
        }
    }
}
