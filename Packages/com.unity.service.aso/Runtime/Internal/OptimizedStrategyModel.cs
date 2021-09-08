using System.Collections.Generic;

namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal struct OptimizedStrategyModel
    {
        public const string ShowAd = "show_ad";
        public const string DoNothing = "do_nothing";
        
        public string strategyName;

        public OptimizedStrategyModel(string strategyName)
        {
            this.strategyName = strategyName;
        }
    }
}