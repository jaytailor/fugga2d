using UnityEngine;

namespace Unity.Service.AdStrategyOptimization.Internal.Conditions
{
    internal class TimeoutCondition: ExecutionCondition
    {
        private double timestamp;
        private double timeout;

        public TimeoutCondition(double timeout)
        {
            this.timeout = timeout;
        }

        public override void OnEnter(IExecutionEnvironment environment)
        {
            base.OnEnter(environment);

            timestamp = Time.realtimeSinceStartup;
        }

        public override void Update()
        {
            base.Update();

            KeepWaiting = (Time.realtimeSinceStartup - timestamp) <= timeout;
        }
    }
}