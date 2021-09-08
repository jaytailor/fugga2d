using Unity.Services.AdStrategyOptimization;

namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal interface IOptimizedStrategyFactory
    {
        OptimizedStrategy Create(string optimizationPoint, OptimizedStrategyModel model);
    }
}