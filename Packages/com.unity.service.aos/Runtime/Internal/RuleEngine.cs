using System;
using System.Collections.Generic;
using System.Linq;

namespace Unity.Service.AdStrategyOptimization.Internal
{
    class RuleEngine : IRuleEngine
    {
        public RuleEngine()
        {
        }

        public void Advance(RuleExecutionContext context, IExecutionEnvironment executionEnvironment)
        {
            if (context.IsFinished)
            {
                return;
            }
            
            if (context.CurrentStep == null)
            {
                context.CurrentStep = context.InitialStep;
                foreach (var condition in context.CurrentStep.Conditions)
                {
                    condition.OnEnter(executionEnvironment);
                }
            }
            
            for (int i = 0; i < context.CurrentStep.Conditions.Length; i++)
            {
                context.CurrentStep.Conditions[i].Update();
            }

            int satisfiedCondition = -1;
            for (int i = 0; i < context.CurrentStep.Conditions.Length; i++)
            {
                if (!context.CurrentStep.Conditions[i].KeepWaiting)
                {
                    satisfiedCondition = i;
                    break;
                }
            }

            if (satisfiedCondition == -1)
            {
                return;
            }
            
            foreach (var condition in context.CurrentStep.Conditions)
            {
                condition.OnExit(executionEnvironment);
            }

            context.CurrentStep = context.CurrentStep.NextSteps[satisfiedCondition];

            if (context.CurrentStep == null)
            {
                context.IsFinished = true;
                return;
            }
            
            foreach (var condition in context.CurrentStep.Conditions)
            {
                condition.OnEnter(executionEnvironment);
            }
        }
    }
}