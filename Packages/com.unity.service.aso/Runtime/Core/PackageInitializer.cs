using System.Threading.Tasks;
using Unity.Service.AdStrategyOptimization.Internal;
using Unity.Service.AdStrategyOptimization.Internal.Conditions;
using Unity.Service.AdStrategyOptimization.Internal.RuleProviders;
using Unity.Services.Core.Internal;
using UnityEngine;

namespace Unity.Services.AdStrategyOptimization.Core
{
    /// <summary>
    /// This is the package initializer.
    /// By implementing <see cref="IInitializablePackage"/>, it will be initialized in the right order, based on dependencies
    /// </summary>
    class PackageInitializer : IInitializablePackage
    {
        /// <summary>
        /// Register to Core through a static method that is called before scene load.
        /// </summary>
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static void Register()
        {
            // Pass an instance of this class to Core
            CoreRegistry.Instance.RegisterPackage(new PackageInitializer());
        }

        /// <summary>
        /// This is the Initialize callback that will be triggered by the Core package.
        /// This method will be invoked when the game developer calls UnityServices.InitializeAsync().
        /// </summary>
        /// <param name="registry">
        /// The registry containing components from different packages.
        /// </param>
        /// <returns>
        /// Return a Task representing your initialization.
        /// </returns>
        public async Task Initialize(CoreRegistry registry)
        {
            var executionEnvironment = new ExecutionEnvironment();
            
            var adStrategyOptimizationServiceImpl = new AdStrategyOptimizationServiceImpl(
                new OptimizedStrategyFactory(executionEnvironment),
                new RuleEngine(),
                new LocalRuleDataProvider(),
                executionEnvironment,
                new ConditionFactory());

            await adStrategyOptimizationServiceImpl.Initialize();

            AdStrategyOptimizationService.Instance = adStrategyOptimizationServiceImpl;
        }
    }
}
