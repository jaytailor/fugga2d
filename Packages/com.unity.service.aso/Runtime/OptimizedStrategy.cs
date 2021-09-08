using System.Collections.Generic;
using Unity.Service.AdStrategyOptimization.Internal;

namespace Unity.Services.AdStrategyOptimization
{
    public enum StrategyType
    {
        DoNothing,
        ShowAd,
        Unsupported
    }
    
    public class OptimizedStrategy
    {
        private readonly IEventConsumer eventConsumer;
        private readonly string optimizationPoint;
        public StrategyType SelectedStrategy { get; }

        internal OptimizedStrategy(StrategyType strategyType, IEventConsumer eventConsumer, string optimizationPoint)
        {
            this.eventConsumer = eventConsumer;
            this.optimizationPoint = optimizationPoint;
            SelectedStrategy = strategyType;
        }

        public void ReportImpression()
        {
            eventConsumer.ConsumeEvent("impression");
        }
    }
}