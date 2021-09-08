namespace Unity.Service.AdStrategyOptimization.Internal
{
    interface IConditionFactory
    {
        IExecutionCondition Create(NodeCondition nodeCondition);
    }
}