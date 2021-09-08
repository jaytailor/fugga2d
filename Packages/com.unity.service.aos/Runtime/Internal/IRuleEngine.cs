namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal interface IRuleEngine
    {
        void Advance(RuleExecutionContext context, IExecutionEnvironment executionEnvironment);
    }
}