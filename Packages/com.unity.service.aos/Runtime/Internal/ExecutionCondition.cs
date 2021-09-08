namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal abstract class ExecutionCondition: IExecutionCondition
    {
        public bool KeepWaiting { get; internal set; } = true;

        public virtual void OnEnter(IExecutionEnvironment environment)
        {
            KeepWaiting = true;
        }
        
        public virtual void Update()
        {
            
        }

        public virtual void OnExit(IExecutionEnvironment eventBus)
        {
            
        }
    }
}