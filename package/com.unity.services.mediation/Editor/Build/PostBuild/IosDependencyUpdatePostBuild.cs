#if UNITY_IOS

using UnityEditor;
using UnityEditor.Callbacks;
using PlayServicesResolver.Utils.Editor;

namespace Unity.Services.Mediation.Build.Editor
{
    static class IosDependencyUpdatePostBuild
    {
        //IOSResolver.BUILD_ORDER_INSTALL_PODS = 50 (private), so this step is 51
        [PostProcessBuild(51)]
        public static void OnPostProcessBuild(BuildTarget target, string pathToBuiltProject)
        {
            UnityEngine.Debug.Log("[Mediation] Calling pod update on Unity dependencies");
            PlayServicesResolverUtils.PodUpdate(pathToBuiltProject);
            UnityEngine.Debug.Log("[Mediation] Finished pod update on Unity dependencies");
        }
    }
}

#endif
