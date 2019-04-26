#pragma once
#include "Fighter.h"

class Battle
{
public:
	Battle();
	~Battle();
	//public prefight so we have access in main
	void PreFight(Fighter &blue, Fighter &red);

private:
	//all these are private, cause nobody but this class needs access..
	//also encapsulation... yay...
	Fighter Fight(Fighter &blue, Fighter &red);
	void PostFight(Fighter &winner);

};

