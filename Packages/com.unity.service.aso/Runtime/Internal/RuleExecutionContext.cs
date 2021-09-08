using System.Collections.Generic;
using System.Linq;

namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal class RuleExecutionContext
    {
        public static readonly OptimizedStrategyModel DefaultStrategy = new OptimizedStrategyModel(OptimizedStrategyModel.DoNothing);
        
        public ExecutionStep InitialStep { get; }
        public ExecutionStep CurrentStep { get; set; }
        public OptimizedStrategyModel CurrentStrategy => CurrentStep.StrategyModel;
        public bool IsFinished { get; set; }
        
        private readonly IConditionFactory conditionFactory;

        public RuleExecutionContext(OptimizationPointModel optimizationPointModel, IConditionFactory conditionFactory)
        {
            this.conditionFactory = conditionFactory;
            int initialNode = optimizationPointModel.defaultNode;
            int currentNode = initialNode;
            var queue = new Queue<int>();
            var processed = new HashSet<int>();
            var lookup = new Dictionary<int, ExecutionStep>();
            
            queue.Enqueue(currentNode);

            while (queue.Count != 0)
            {
                var item = queue.Dequeue();

                if (processed.Contains(item))
                {
                    continue;
                }
                
                CreateExecutionStep(optimizationPointModel, item, queue, processed, lookup);
            }

            foreach (var executionStep in lookup)
            {
                FillExecutionStep(executionStep.Value, optimizationPointModel, executionStep.Key);
            }

            InitialStep = lookup[initialNode];
        }

        private ExecutionStep TryCreateExecutionStep(int currentNode, Dictionary<int, ExecutionStep> lookup)
        {
            if (!lookup.TryGetValue(currentNode, out var step))
            {
                step = new ExecutionStep();
                lookup[currentNode] = step;
            }

            return step;
        }

        private void CreateExecutionStep(OptimizationPointModel optimizationPointModel, int currentNode,
            Queue<int> queue, HashSet<int> processed,
            Dictionary<int, ExecutionStep> lookup)
        {
            ExecutionStep step = TryCreateExecutionStep(currentNode, lookup);

            step.NextSteps = new ExecutionStep[optimizationPointModel.adjacency[currentNode].Length];
            for (int i = 0; i < optimizationPointModel.adjacency[currentNode].Length; i++)
            {
                int adjacentIndex = optimizationPointModel.adjacency[currentNode][i];
                
                step.NextSteps[i] = TryCreateExecutionStep(adjacentIndex, lookup);
                queue.Enqueue(adjacentIndex);
            }

            processed.Add(currentNode);
        }

        private void FillExecutionStep(ExecutionStep executionStep, OptimizationPointModel optimizationPointModel, int node)
        {
            executionStep.StrategyModel = optimizationPointModel.nodes[node].strategy;
            executionStep.Conditions = optimizationPointModel.condition[node].Select(conditionFactory.Create).ToArray();
        }
    }
}