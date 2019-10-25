using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Mediation;
using UnityEngine.Advertisements;

public class Mediation : MonoBehaviour
{
    public MediationAdapter adapter;
    public DeltaDNAMediationListener handler;

    private void Awake()
    {
        int numGameSessions = FindObjectsOfType<Mediation>().Length;
        if (numGameSessions > 1)
        {
            Destroy(gameObject);
        }
        else
        {
            DontDestroyOnLoad(gameObject);
        }
    }

    private void Start()
    {
        adapter = new MediationAdapter();
        handler = new DeltaDNAMediationListener(adapter);
    }

    public void LoadInterstital()
    {
        adapter.LoadInterstitial(handler, null);
    }

    public void Show() {
        handler.Show();
    }
}
