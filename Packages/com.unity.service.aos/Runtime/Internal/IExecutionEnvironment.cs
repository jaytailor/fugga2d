using System;

namespace Unity.Service.AdStrategyOptimization.Internal
{
    public interface IExecutionEnvironment
    {
        IObservable<string> EventSink { get; }
    }
}