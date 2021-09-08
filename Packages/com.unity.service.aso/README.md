# Ad Strategy Optimization

## Use Cases

The Game Developer would like change ad frequency settings in real-time without updating the game.
For example modifying minimum and maximum interval between ad shows, maximum ads per day or per session.

The Game Developer would like to use different strategies per player.

The Game Developer would like to choose between showing an rewarded ad or IAP purchase based on the player.

The Game Developer would expect easy integration which can be done withing few hours.

## Prototype Overview

The prototype implemented according UGS guidelines for SDK.

Main components:
 - Rule Engine
 - Data Source
 - Counters

### Rule Engine

The Rule Engine is finite state machine which processes rules graph. Graph Node contains two main properties a predefined condition and strategy.
 - Predefined condition allows to activate a next node when it is satisfied, for example while impression count above 5.
 - Strategy contains guidance for the game developer, for example show ad.

```
              ┌──────────────┐           
              │              │           
              ▼              │           
┌──────────────────────────┐ │           
│                          │ │           
│           Node           │ │           
│                          │ │           
└──────────────────────────┘ │           
              │              │           
    Condition │              │  Condition
              ▼              │           
┌──────────────────────────┐ │           
│                          │ │           
│           Node           │ │           
│                          │ │           
└──────────────────────────┘ │           
              │              │           
              │              │           
              └──────────────┘           
```

Game Developer doesn't interact with graph directly, but may configure higher level strategy in the dashboard which will be translated to the rule graph.

Why to use graph and rules engine? Game Developer can use very advanced and complex conditions to determine what to do, for example multiple condition must be satisfied in order to show an ad.
Rules Engine would allow us extend feature set and allow Game Developer to use any combination of our features to achieve desired goal.

Graph example:

```
     ┌──────────────────────────┐                    
     │                          │                    
     │        Do Nothing        │                    
     │                          │                    
     └──────────────────────────┘                    
                   │  ┌───────────┐                  
    Timeout 1 min  │  │           │                  
                   ▼  ▼           │                  
     ┌──────────────────────────┐ │                  
     │                          │ │                  
     │         Show Ad          │ │                  
     │                          │ │                  
     └──────────────────────────┘ │                  
                   │              │                  
Impression Occured │              │  Timeout 30 mins 
                   ▼              │                  
     ┌──────────────────────────┐ │                  
     │                          │ │                  
     │        Do Nothing        │ │                  
     │                          │ │                  
     └──────────────────────────┘ │                  
                   │              │                  
                   │              │                  
                   └──────────────┘                  
```

Description: 
1. When game starts it will wait for 1 minute before showing any ads, to ensure that Player is not disturb with ads immediately.
2. After 1 minute timeout, Game can show ad to the Player.
3. After impression occured, Game will wait another 30 minutes before showing new ad.

The Game Developer may choose alternative timeout numbers for an AB test or completely different graph for a player in a different segment.

Complexity: Since graph is hidden from the Game Developer, Internal Developer would be responsible for supporting set of conditions for moving between states.
Though it is possible to expose such functionality to the Game Developer.

The prototype contains minimum support to run example graph above.

### Data Source

Ad Strategy Optimization can consume data from any source: own backend or remote config. Though remote config option is preferred since it is used as common way to retrieve configuration data for the game.

The prototype contains only in memory data source for testing purposes.

### Counters

Rules Engine and Rule nodes are using local counters for conditions. Counters are stored locally on the device.
Counters can be time-based (for example per day, per week) or session based. Game Developer can use those counters when configuring Rules in the dashboard.

It is possible to introduce Game Developer defined counters.

The prototype implements only Impression counter.

## Integration Example

```csharp
private OptmizedStrategy strategy;

public void PrepareAdUI()
{
    // 1. Game Developer should use a Public API method to get strategy for the next action
    strategy = await AdStrategyOptimizationService.Instance.RequestNextStrategy("optimizzation_point");
    
    // 2. Based on selected strategy Game Developer should act accordingly. 
    // Show or not show an ad in the case of interstitial ad unit
    // Enable/disable reward button in the case of rewarded ad unit
    if (interstitialStrategy.SelectedStrategy == StrategyType.ShowAd)
    {
        // Show Ad Strategy, act accordingly
    }
    else
    {
        // Do nothing
    }
}

public void OnImpression()
{
    // 3. Report impression back to system
    // In the case of Unity Mediation, we can intercept all those events automatically and game developer doesn't need to do anything
    strategy.ReportImpression();
}
```