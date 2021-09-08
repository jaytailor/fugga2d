using System.Threading.Tasks;

namespace Unity.Services.AdStrategyOptimization
{
    public interface IAdStrategyOptimization
    {
        OptimizedStrategy RequestNextStrategy(string optimizationPoint);
    }
}