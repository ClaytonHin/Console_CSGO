#include "ClassTerrorist.h"
#include <iostream>

//Create our constructor
ClassTerrorist::ClassTerrorist(std::string name)
{
	//set the Name property in our parent class
	Name = name;
}

//Define our plantBomb function
void ClassTerrorist::plantBomb()
{
	std::cout << Name << " is Planting the bomb...\n\n" << std::endl;
}

//Define our eliminateCounterTerrorist function
void ClassTerrorist::eliminateCounterTerrorist()
{
	std::cout << Name << " has eliminated the Counter Terrorist\n\n" << std::endl;
}

