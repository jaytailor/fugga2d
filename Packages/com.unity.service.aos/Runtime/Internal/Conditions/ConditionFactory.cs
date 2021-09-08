using System;

namespace Unity.Service.AdStrategyOptimization.Internal.Conditions
{
    class ConditionFactory: IConditionFactory
    {
        public IExecutionCondition Create(NodeCondition nodeCondition)
        {
            if (nodeCondition.conditionType == "timeout")
            {
                return new TimeoutCondition(nodeCondition.conditionValue);
            }
            else if (nodeCondition.conditionType == "event")
            {
                return new EventCondition(nodeCondition.conditionParameter);
            }
            else
            {
                throw new NotSupportedException();
            }
        }
    }
}