#pragma once
#include <string>
using namespace std;

class Human {

public:
	Human();
	~Human();

	//Getters, used to get private information
	string GetEyeColor();
	string GetSex();
	string GetRace();
	string GetName();
	int GetHeight();
	int GetWeight();

	//Setters, used to set the private variables.
	void SetEyeColor(string eyeColor);
	void SetSex(string sex);
	void SetRace(string race);
	void SetName(string name);
	void SetHeight(int height);
	void SetWeight(int weight);

private:
	string EyeColor;
	string Name;
	string Sex;
	string Race;
	int Height;
	int Weight;
};

