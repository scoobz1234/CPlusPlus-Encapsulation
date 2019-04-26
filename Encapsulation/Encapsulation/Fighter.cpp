#include "Fighter.h"
#include <iostream>
using namespace std;

//this is our overloaded constructor, which requires the information to be input on creation of the object.
Fighter::Fighter(string fighterName, string name, string eyeColor, string sex, string race, int height, int weight)
{
	//use the parameters to set the information...
	FighterName = fighterName;
	Human::SetName(name);
	Human::SetEyeColor(eyeColor);
	Human::SetSex(sex);
	Human::SetRace(race);
	Human::SetHeight(height);
	Human::SetWeight(weight);
}
//default constructors and deconstructors
Fighter::Fighter(){}
Fighter::~Fighter(){}

// ::: GETTERS ::: ///
string Fighter::GetFighterName() { return FighterName; }
int Fighter::GetHealth() { return FighterHealth; }
void Fighter::SetHealth(int health) { FighterHealth = health; }

// ::: CREATING A FIGHTER FUNCTION ::: //
Fighter CreateFighter() 
{
	//local variables that we will use for the Fighter constructor.
	string fighterName;
	string name;
	string eyeColor;
	string sex;
	string race;
	int height;
	int weight;
	
	cout << "Lets create your fighter for the battle\n" << endl;
	
	//getline is used when you need a sentence, cin uses space as a terminator or \n
	//so in order to get the spaces, we use getline which ignores them.
	//we still use the cin function but getline is the part that ignores the spaces
	cout << "What is your fighters ring name ('The xxxxx')?" << endl;
	getline(cin,fighterName);

	cout << "What is your fighters real name (First Last)?" << endl;
	getline(cin, name);
	
	cout << "What is your fighters eye color?" << endl;
	getline(cin, eyeColor);
	
	cout << "What is your fighters sex?" << endl;
	getline(cin, sex);
	
	cout << "What is your fighters race?" << endl;
	getline(cin, race);
	
	cout << "What is your fighters height (inches)?" << endl;
	cin >> height;
	
	cout << "What is your fighters weight (pounds)?" << endl;
	cin >> weight;
	//clear the command line so we have a fresh screen
	system("CLS");
	return Fighter(fighterName, name, eyeColor, sex, race, height, weight);
	
}

