namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal class ExecutionStep
    {
        public OptimizedStrategyModel StrategyModel { get; set; }
        public IExecutionCondition[] Conditions { get; set; }
        public ExecutionStep[] NextSteps { get; set; }
    }
}