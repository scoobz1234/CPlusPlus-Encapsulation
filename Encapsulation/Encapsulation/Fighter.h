#pragma once
#include "Human.h"
class Fighter :	public Human
{
public:
	//default constructor (so we can create empty classes)
	Fighter();
	//overloaded constructor (so we can create directly.)
	Fighter(string fighterName, string name, string eyeColor, string sex, string race, int height, int weight);
	~Fighter(); //deconstructor

	// booleans to identify what type a fighter the fighter is.
	bool isBoxer;
	bool isMixedMartialArtist;
	bool isWrestler;

	//Getters
	string GetFighterName();
	int GetHealth();
	//Setters
	void SetHealth(int health);

private:
	//private information 
	string FighterName;
	int FighterHealth = 100;
};
//kept this outside of the class for global accessability
//not entirely sure if this is the best way to do this. but it works...
Fighter CreateFighter();
