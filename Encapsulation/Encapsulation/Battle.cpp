// ::: PRE-PROCESSOR DIRECTIVES ::: //
#include "Battle.h"
#include <iostream>
#include <ctime>

using namespace std;


Battle::Battle(){}
Battle::~Battle(){}


void Battle::PreFight(Fighter &blue, Fighter &red)
{
	//introductions!
	cout << "In the blue corner we have weighing in at " << blue.GetWeight() << " pounds... " 
		<< blue.GetName() << " " << blue.GetFighterName() << " !!!\n\n" << endl;
	cout << "In the red corner we have weighing in at " << red.GetWeight() << " pounds... " 
		<< red.GetName() << " " << red.GetFighterName() << " !!!\n\n" << endl;
	//start the fight!!
	Fight(blue, red);
}

void Battle::PostFight(Fighter &winner)
{
	//Tell us the winner!
	//currently this just says KO every time. eventually i would count the hits, if its 
	//greater than 1 its a KO if its 1 its TKO
	cout << "And the winner is " << winner.GetFighterName() << " by KO" << endl;
}

Fighter Battle::Fight(Fighter &blue, Fighter &red)
{
	//set our const values for the hardest a fighter can hit and the least he can hit for...
	const int maxHit = 100;
	const int minHit = 0;

	//boolean for the while loop, checks if the players are still fighting
	bool isFighting = true;
	//create empty fighter for the winner.
	Fighter winner;
	//creates the time seed for random function.
	srand(time(0));

	//loop for the battle...
	while (isFighting)
	{
		//get the damage which is a random number between the maxHit and MinHit variables
		// the + 1 ensures we get the last number else we get 0-99. and adding the minHit at the end
		// ensures we always have atleast the minimum hit.
		int damage = rand() % (maxHit - minHit + 1) + minHit;
		// this random number is picking which player is getting hit.
		int who = rand() % 2 + 1;
		// so if its 1 its the blue player...
		if (who == 1)
		{
			cout << blue.GetFighterName() << " was hit and took " << damage << " damage" << endl;
			//set blue players health to blues current health - the damage from above.
			blue.SetHealth(blue.GetHealth() - damage);
			//check if the blue players health is less than or equal to 0
			if (blue.GetHealth() <= 0)
			{
				//if its less than 0 set it to 0.
				blue.SetHealth(0);
				//set the fighting bool to false, because the fight is over
				isFighting = false;
				//call the postfight function with the winner of the fight.
				PostFight(red);
				//return winner..
				return winner = red;
			}
			//if the player isnt out of health we tell the user they were hit and what their health is at...
			cout << blue.GetFighterName() << " is at " << blue.GetHealth() << " Health!" << endl;
		}
		//else if its 2 its the red player...
		else
		{
			//set red players health to reds current health - the damage from above...
			cout << red.GetFighterName() << " was hit and took " << damage << " damage" << endl;
			red.SetHealth(red.GetHealth() - damage);
			//check health
			if (red.GetHealth() <= 0)
			{
				red.SetHealth(0);
				isFighting = false;
				PostFight(blue);
				return winner = blue;
			}
			cout << red.GetFighterName() << " is at " << red.GetHealth() << " Health!" << endl;
		}
	}
	//return the winner (this will be empty if we dont fight)
	return winner;
}
