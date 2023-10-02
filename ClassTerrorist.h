#pragma once
#include "ClassCharacter.h"

//Class Terrorist inherits our methods from ClassCharacter
class ClassTerrorist : public ClassCharacter
{
public:
	//Create our constructor for the Class Terrorist
	ClassTerrorist(std::string name);

	//Prototype our Terrorist Methods
	void plantBomb();
	void eliminateCounterTerrorist();


private:

};

