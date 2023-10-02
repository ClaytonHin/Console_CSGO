#pragma once
#include "ClassGameStructure.h"
//Include the string library to have strings available
#include <string>
class ClassCharacter : public ClassGameStructure
{

public:
	//*******************Public Properties*********************

	//Create a string property
	//It's in the character class because both Terrorists, and Counter Terrorists will need to inheirt the method
	std::string Name;

	//********************Public Methods***********************
	

	//Create the setter for the private property Health
	void setHealth(int health);
	
	//Create the getter for the private property Health
	int getHealth();

	//Create 2 public methods called Talk using Overloading Polymorphism in the character class.
	//Our fist Talk method, which we can overload later with the 2nd Talk method
	void Talk(std::string stuffToSay);

	//Create our 2nd method
	//This will be used to overload our first Talk method, allowing us to pass in the name of who is talking
	void Talk(std::string Name, std::string stuffToSay);

private:
	//******************Private Properties*********************

	//Create our private property of Health 
	int Health;

};

