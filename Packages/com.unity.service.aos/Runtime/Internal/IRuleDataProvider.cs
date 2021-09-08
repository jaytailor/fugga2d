using System.Collections.Generic;
using System.Threading.Tasks;

namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal struct RuleNode
    {
        public OptimizedStrategyModel strategy;
    }
    
    internal struct NodeCondition
    {
        public string conditionType;
        public int conditionValue;
        public string conditionParameter;
    }
    
    internal struct OptimizationPointModel
    {
        public string optimnizationPoint;
        public int defaultNode;
        public RuleNode[] nodes;
        public NodeCondition[][] condition;
        public int[][] adjacency;
    }
    
    internal interface IRuleDataProvider
    {
        Task<OptimizationPointModel> Request(string optimizationPoint);
        Task<OptimizationPointModel[]> BatchRequest();
    }
}