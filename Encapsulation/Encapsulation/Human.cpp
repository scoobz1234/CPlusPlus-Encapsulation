#include "Human.h"


//Default Constructor and Destructors.
Human::Human() {};
Human::~Human() = default;

//Get functions, returns private variables
string Human::GetEyeColor() 
{ 
	return EyeColor; 
}

string Human::GetSex() 
{
	return Sex; 
}

string Human::GetRace() 
{
	return Race; 
}

string Human::GetName() 
{
	return Name;
}

int Human::GetHeight()
{
	return Height; 
}

int Human::GetWeight() 
{
	return Weight; 
}

//Set functions, set private functions.
void Human::SetEyeColor(string eyeColor)
{
	EyeColor = eyeColor;
}

void Human::SetSex(string sex)
{
	Sex = sex;
}

void Human::SetRace(string race)
{
	Race = race;
}

void Human::SetName(string name)
{
	Name = name;
}

void Human::SetHeight(int height)
{
	Height = height;
}

void Human::SetWeight(int weight)
{
	Weight = weight;
}

