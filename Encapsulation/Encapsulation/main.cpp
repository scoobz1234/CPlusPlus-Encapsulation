/* Copyright © 2018 Stephen R. Ouellette - All Rights Reserved */

// ::: PRE-PROCESSOR DIRECTIVES ::: //
#include <iostream>
#include <string>
#include "Fighter.h"
#include <list>
#include "Battle.h"
#include <ctime>
#include <vector>

using namespace std;

//Main function.
int main (int argc, char** argv)
{
	//a vector to hold our Humans...
	vector <Fighter> fighters;
	cout << "\t\n\nWelcome To The Thunderdome!\n\n";
	Fighter Player = CreateFighter();
	fighters.push_back(Player);
	
	
	//Lets create some Fighters and set their characteristics...
	//Human class has a default constructor, so it doesnt require parameters
	//but if you wanna create a fighter, the constructor for Fighter requires you
	//enter some information...
	// Bob
	Fighter Bob("The Hick","Bob Smith","Blue","Male","Caucasian",70,210);
	Bob.isMixedMartialArtist = true;
	fighters.push_back(Bob);
	
	// Kyle
	Fighter Kyle("The Iron Fist", "Kyle Andrews", "Brown", "Male", "European", 68, 205);
	Kyle.isMixedMartialArtist = true;
	fighters.push_back(Kyle);
	
	// Tod
	Fighter Tod("The Toddler", "Tod Pickles", "Blue", "Male", "African American", 72, 246);
	Tod.isBoxer = true;
	fighters.push_back(Tod);
	
	//This loop will go through the list and introduce all fighters...
	//range based loop modern form...
	//essentially its a foreach object in list loop
	for (auto& human : fighters)
	{
		cout << "Introducing: " << human.GetFighterName() << endl;
		cout << human.GetName() << " is a " << human.GetHeight() << " inch tall "
			<< human.GetWeight() << " Pound " << human.GetSex() << " with " << human.GetEyeColor() << " eyes\n\n";
	}
	//just removing the players fighter from the vector so he doesnt fight himself...
	fighters.erase(fighters.begin());
	
	//begin the seed for the random function
	srand(time(0));
	
	cout << "\n\n\tTime for a battle!\n\n";

	//create a battle object, name it fight one, in the future
	//we would use this so we can track all the fights winners.
	Battle FightOne;
	//start the prefight.
	FightOne.PreFight(Player,fighters[rand() % fighters.size()]);

	system("PAUSE");
	return 0;
}