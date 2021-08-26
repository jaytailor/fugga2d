using System;
using System.Threading.Tasks;
using Unity.Services.Mediation.Platform;
using UnityEngine;

namespace Unity.Services.Mediation
{
    interface IMediationServiceImpl : IMediationService
    {
        Task Initialize(string gameId, string installId);

        InitializationState InitializationState { get; }
    }
}
