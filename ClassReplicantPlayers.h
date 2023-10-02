#pragma once
#include "ClassCharacter.h"
class ClassReplicantPlayers :public ClassCharacter
{
public:
	//Create a constructor method to make our class objects
	ClassReplicantPlayers();

	//This class inherits talk from the character class
	//So there is no need to define another talk method

	//Create our destructor method, which runs one time per object when that object is destroyed
	~ClassReplicantPlayers();

private:

};

