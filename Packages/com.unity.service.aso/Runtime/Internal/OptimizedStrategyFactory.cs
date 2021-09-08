using Unity.Services.AdStrategyOptimization;

namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal class OptimizedStrategyFactory: IOptimizedStrategyFactory
    {
        private readonly IEventConsumer eventConsumer;

        public OptimizedStrategyFactory(IEventConsumer eventConsumer)
        {
            this.eventConsumer = eventConsumer;
        }

        public OptimizedStrategy Create(string optimizationPoint, OptimizedStrategyModel model)
        {
            return new OptimizedStrategy(ConvertStrategyType(model.strategyName), eventConsumer, optimizationPoint);
        }

        private StrategyType ConvertStrategyType(string modelStrategyName)
        {
            switch (modelStrategyName)
            {
                case OptimizedStrategyModel.DoNothing:
                    return StrategyType.DoNothing;
                case OptimizedStrategyModel.ShowAd:
                    return StrategyType.ShowAd;
                default:
                    return StrategyType.Unsupported;
            }
        }
    }
}