#include "ClassCharacter.h"
#include <iostream>


//Method to set the health
void ClassCharacter::setHealth(int health)
{
	//Setting oue health variable
	Health = health;

	//Check if the character has <= 0 health
	if (Health <= 0)
	{
		//If <= 0 execute a cout statement saying that the character has expired
		std::cout << "\n\n" << Name << " Has Expired... !!!\n\n";
	}

}

//Method to get the health
int ClassCharacter::getHealth()
{
	//return our private property, Health
	return Health;
}

//Define our first Talk method
//We can, and will overload this later with the 2nd Talk method
void ClassCharacter::Talk(std::string stuffToSay)
{
	std::cout << "\n\n" << stuffToSay << std::endl;
}

//Define our second Talk method
//This is used to overload our first Talk method, which allows us to pass in the name, along with what they said
void ClassCharacter::Talk(std::string Name, std::string stuffToSay)
{
	std::cout << "\n\n" << Name << " Says: " << stuffToSay << std::endl;
}

