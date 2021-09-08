using System;
using System.Threading.Tasks;

namespace Unity.Service.AdStrategyOptimization.Internal.RuleProviders
{
    class LocalRuleDataProvider : IRuleDataProvider
    {
        public Task<OptimizationPointModel> Request(string optimizationPoint)
        {
            if (optimizationPoint == "interstitial")
            {
                OptimizationPointModel model = new OptimizationPointModel();
                
                model.optimnizationPoint = "interstitial";
                model.nodes = new[]
                {
                    new RuleNode
                    {
                        strategy = new OptimizedStrategyModel(OptimizedStrategyModel.DoNothing)
                    },
                    new RuleNode
                    {
                        strategy = new OptimizedStrategyModel(OptimizedStrategyModel.ShowAd)
                    },
                    new RuleNode
                    {
                    strategy = new OptimizedStrategyModel(OptimizedStrategyModel.DoNothing)
                    }
                };

                model.condition = new[]
                {
                    new[]
                    {
                        new NodeCondition
                        {
                            conditionType = "timeout",
                            conditionValue = 10
                        }
                    },
                    new[]
                    {
                        new NodeCondition
                        {
                            conditionType = "event",
                            conditionParameter = "impression"
                        }
                    },
                    new[]
                    {
                        new NodeCondition
                        {
                            conditionType = "timeout",
                            conditionValue = 30
                        }
                    }
                };

                model.adjacency = new[]
                {
                    new[] {1},
                    new[] {2},
                    new[] {1},
                };

                return Task.FromResult(model);
            }

            return Task.FromException<OptimizationPointModel>(new NotSupportedException());
        }

        public async Task<OptimizationPointModel[]> BatchRequest()
        {
            return new[]
            {
                await Request("interstitial")
            };
        }
    }
}