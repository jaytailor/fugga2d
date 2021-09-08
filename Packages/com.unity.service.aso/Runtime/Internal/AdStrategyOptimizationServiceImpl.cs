using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.Services.AdStrategyOptimization;

namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal class AdStrategyOptimizationServiceImpl: IAdStrategyOptimization
    {
        private readonly IOptimizedStrategyFactory optimizedStrategyFactory;
        private readonly IRuleEngine ruleEngine;
        private readonly IRuleDataProvider ruleDataProvider;
        private readonly IExecutionEnvironment executionEnvironment;
        private readonly IConditionFactory conditionFactory;
        private Dictionary<string, RuleExecutionContext> executionContexts;

        public AdStrategyOptimizationServiceImpl(IOptimizedStrategyFactory optimizedStrategyFactory, 
            IRuleEngine ruleEngine, IRuleDataProvider ruleDataProvider, 
            IExecutionEnvironment executionEnvironment, IConditionFactory conditionFactory)
        {
            this.optimizedStrategyFactory = optimizedStrategyFactory;
            this.ruleEngine = ruleEngine;
            this.ruleDataProvider = ruleDataProvider;
            this.executionEnvironment = executionEnvironment;
            this.conditionFactory = conditionFactory;
        }

        public async Task Initialize()
        {
            var rules = await ruleDataProvider.BatchRequest();

            executionContexts = new Dictionary<string, RuleExecutionContext>(rules.Length);

            foreach (var ruleModel in rules)
            {
                executionContexts[ruleModel.optimnizationPoint] = new RuleExecutionContext(ruleModel, conditionFactory);
            }
        }

        public OptimizedStrategy RequestNextStrategy(string optimizationPoint)
        {
            var model = optimizedStrategyFactory.Create(optimizationPoint, NextStrategyModel(optimizationPoint));
            return model;
        }

        private OptimizedStrategyModel NextStrategyModel(string optimizationPoint)
        {
            if (!executionContexts.TryGetValue(optimizationPoint, out var executionContext))
            {
                return RuleExecutionContext.DefaultStrategy;
            }
            
            ruleEngine.Advance(executionContext, executionEnvironment);
            
            return executionContext.CurrentStrategy;
        }
    }
}