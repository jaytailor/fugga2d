=========
INFO
=========

Parental Gate Kit provides a simple all-sufficient tool for Kids Apps developers.

Parental Gate Kit based on Unity’s UI system.

Demo: iOS Game - Kaspi Kitten - https://itunes.apple.com/app/kaspi-kitten/id951460099

A Parental Gate is required by Apple to be featured in the App Store under the Kids category.

Use the Parental Gate to prevent kids from "ADULT" actions: 

	- sunintentionally activating external links
	- filling forms
	- share multimedeia content
	- in-app purchases 

==========
HOW TO USE
==========

0. Open Example Scene
1. ParentalGateMenu prefab must be placed on Scene as Child of Canvas
2. ParentalGateMenu GameObject is connected to the main script - "GameControl"
3. "GameControl" is attached to "$" GameObject, in which you can assign callbacks to "ADULT" actions
4. "ADULT" action can be done after the correct answer in ParentalGateMenu

=============
HOW TO EXPAND
=============

//Set callback in "GameControl" without the need to climb into the "ParentalGateControl" class

public void NewAdultActionWithParentalGate()
{
	parentalGateControl.Show((success) => 
		{
			if(success)
			{
				NewAdultAction();
			}
		});
}

private void NewAdultAction()
{
	print("OK - NewAdultAction() Function call from outside the ParentalGateControl class - OK");
}

=============
HOW TO MODIFY
=============

//Use script inspector for "ParentalGateControl" of "ParentalGateMenu" GameObject

public string taskDescription = "5 + 3 = ?";
public string correctAnswer = "8";
public string textFalseAnswer = "False! ";

//Use "AnswerRow" GameObjects in "ParentalGateMenu" GameObject to modify answers

 public string correctAnswer = "8"; is compared with TextComponent.text of "LblAnswer"

=========
FONT
=========

Download free Luckiest Guy Font if you want to get the font like on the screenshot.
Target font is not included in this package for legal reasons.

=========
Support
=========

www.makaka.org
https://www.facebook.com/makakaorg
https://vk.com/makakaorg
