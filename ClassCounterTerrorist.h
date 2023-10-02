#pragma once
#include "ClassCharacter.h"

//Class Counter Terrorist inherits our methods from ClassCharacter
class ClassCounterTerrorist : public ClassCharacter
{
public:
	//Create our constructor for the Class Counter Terrorist
	ClassCounterTerrorist(std::string name);

	//Create our methods for our Counter Terrorist Class
	void defuseBomb();
	void eliminateTerrorist();


private:

};

