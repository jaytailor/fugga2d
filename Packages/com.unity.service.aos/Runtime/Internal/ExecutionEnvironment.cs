using System;
using System.Collections.Generic;

namespace Unity.Service.AdStrategyOptimization.Internal
{
    public class ExecutionEnvironment: IExecutionEnvironment, IEventConsumer
    {
        class Unsubscriber<T> : IDisposable
        {
            private readonly List<IObserver<T>> observers;
            private readonly IObserver<T> _toRemove;

            public Unsubscriber(List<IObserver<T>> observers, IObserver<T> toRemove)
            {
                this.observers = observers;
                this._toRemove = toRemove;
            }

            public void Dispose()
            {
                observers.Remove(_toRemove);
            }
        }

        class EventSinkObservable : IObservable<string>
        {
            private List<IObserver<string>> observers = new List<IObserver<string>>();

            public IDisposable Subscribe(IObserver<string> observer)
            {
                observers.Add(observer);
                return new Unsubscriber<string>(observers, observer);
            }

            public void Triggger(string eventName)
            {
                foreach (var observer in observers)
                {
                    observer.OnNext(eventName);
                }
            }
        }

        private EventSinkObservable eventSinkObservable = new EventSinkObservable();

        public IObservable<string> EventSink => eventSinkObservable;
        
        public void ConsumeEvent(string eventName)
        {
            eventSinkObservable.Triggger(eventName);
        }
    }
}