using UnityEngine;

namespace MediationWrapper
{
    public static class Mediation
    {
        internal static string GameId { get; private set; }
        internal static AndroidJavaObject Wrapper {  get; private set; }
        internal static AndroidJavaObject CurrentActivity { get; private set; }
        
        public static void Initialize(string gameId)
        {
            GameId = gameId;
            CurrentActivity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
            Wrapper = new AndroidJavaObject("com.unity3d.mediation.wrapper.MediationWrapper");
            Wrapper.Call("Initialize", GameId);
        }
        
        public static string GetStatus()
        {
            return Wrapper.Get<string>("Status");
        }
    }
}