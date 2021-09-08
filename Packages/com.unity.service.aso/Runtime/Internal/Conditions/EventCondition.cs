using System;

namespace Unity.Service.AdStrategyOptimization.Internal.Conditions
{
    internal class EventCondition: ExecutionCondition, IObserver<string>
    {
        private readonly string eventName;
        private IDisposable sunscription;

        public EventCondition(string eventName)
        {
            this.eventName = eventName;
        }

        public override void OnEnter(IExecutionEnvironment environment)
        {
            base.OnEnter(environment);

            sunscription = environment.EventSink.Subscribe(this);
        }

        public override void OnExit(IExecutionEnvironment eventBus)
        {
            base.OnExit(eventBus);
            
            sunscription.Dispose();
        }

        public void OnCompleted()
        {
            
        }

        public void OnError(Exception error)
        {
            
        }

        public void OnNext(string value)
        {
            if (value == eventName)
            {
                KeepWaiting = false;
            }
        }
    }
}