namespace Unity.Service.AdStrategyOptimization.Internal
{
    public interface IEventConsumer
    {
        void ConsumeEvent(string eventName);
    }
}