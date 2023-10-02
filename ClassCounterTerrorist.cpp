#include "ClassCounterTerrorist.h"
#include <iostream>

//Create our CounterTerrorist constructor
//We use :: to append our parent class methods upon the child class methods
ClassCounterTerrorist::ClassCounterTerrorist(std::string name)
{
	//setting the Name property in our parent class
	Name = name;
}

//define our defuseBomb function
void ClassCounterTerrorist::defuseBomb()
{
	std::cout << Name << " is Defusing the bomb...\n\n" << std::endl;
}

//Define our eliminateTerrorist function
void ClassCounterTerrorist::eliminateTerrorist()
{
	std::cout << Name << " has eliminated the Terrorist\n\n" << std::endl;
}

