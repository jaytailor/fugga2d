namespace Unity.Service.AdStrategyOptimization.Internal
{
    internal interface IExecutionCondition
    {
        bool KeepWaiting { get; }
        void OnEnter(IExecutionEnvironment executionEnvironment);
        void Update();
        void OnExit(IExecutionEnvironment executionEnvironment);
    }
}