//Assignment: Object Oriented Programming
//By:Clayton Hinderline
//I'm using inspiration from the game Counter Strike Global Offensive for my character classes and their methods

//Add our libraries
//Allows for console input and output
#include <iostream>
//Include our header files for both ClassTerrorist, and ClassCounterTerrorist
#include "ClassCounterTerrorist.h"
#include "ClassTerrorist.h"
#include "ClassReplicantPlayers.h"

//prototype our functions
void displayMenu();

//Create the isAlive variable to create the reset game loop
bool isAlive = true;

//Start our main function
int main()
{
	//Create a do while loop to allow the user to play again
	while (isAlive == true)
	{
		//Declare a variable called choice to allow the user to play again by inputing a 'y' or a 'n'
		char choice;

		//Display a title for the game
		std::cout << "\n\n ****** Welcome to text based CSGO *****" << std::endl;

		//Call our displayMenu function
		displayMenu();

		//Pause to make the program easier to look at / understand
		system("pause");

		//Creating objects for ClassTerrorist
		ClassTerrorist Terrorist1("Kyle");
		ClassTerrorist Terrorist2("Todd");
		ClassTerrorist Terrorist3("Steve");
		ClassTerrorist Terrorist4("Michael");
		ClassTerrorist Terrorist5("Howe");

		//Set the health of the Terrorists
		Terrorist1.setHealth(100);
		Terrorist2.setHealth(100);
		Terrorist3.setHealth(100);
		Terrorist4.setHealth(100);
		Terrorist5.setHealth(100);

		//Display the starting health for Terrorists
		std::cout << "\n\nStarting Terrorist Health Points\n";
		std::cout << "\n" << Terrorist1.Name << " Has " << Terrorist1.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << Terrorist2.Name << " Has " << Terrorist2.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << Terrorist3.Name << " Has " << Terrorist3.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << Terrorist4.Name << " Has " << Terrorist4.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << Terrorist5.Name << " Has " << Terrorist5.getHealth() << " Health Points!\n\n";

		//Passes the command "pause" to the command line
		//Which stops the program and waits for the user to press any character
		system("pause");

		//Creating objects for ClassCounterTerrorist
		ClassCounterTerrorist CounterTerrorist1("Trent");
		ClassCounterTerrorist CounterTerrorist2("Zack");
		ClassCounterTerrorist CounterTerrorist3("John");
		ClassCounterTerrorist CounterTerrorist4("Bill");
		ClassCounterTerrorist CounterTerrorist5("Austin");

		//Set the health of the CounterTerrorists
		CounterTerrorist1.setHealth(100);
		CounterTerrorist2.setHealth(100);
		CounterTerrorist3.setHealth(100);
		CounterTerrorist4.setHealth(100);
		CounterTerrorist5.setHealth(100);

		//Display the starting health for CounterTerrorists
		std::cout << "\n\nStarting CounterTerrorist Health Points\n";
		std::cout << "\n" << CounterTerrorist1.Name << " Has " << CounterTerrorist1.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << CounterTerrorist2.Name << " Has " << CounterTerrorist2.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << CounterTerrorist3.Name << " Has " << CounterTerrorist3.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << CounterTerrorist4.Name << " Has " << CounterTerrorist4.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << CounterTerrorist5.Name << " Has " << CounterTerrorist5.getHealth() << " Health Points!\n\n";

		//Pause to make the program easier to look at / understand
		system("pause");

		//Terrorists in action
		Terrorist1.eliminateCounterTerrorist();
		Terrorist2.eliminateCounterTerrorist();
		Terrorist3.plantBomb();
		Terrorist4.eliminateCounterTerrorist();
		Terrorist5.eliminateCounterTerrorist();

		system("pause");

		//Terrorist 1, 2, 4, and 5 hit the Counter Terrorist
		//They eliminate CounterTerrorist 1, 3, 4, and 5
		 
		//Terrorist1 hit CounterTerrorist1 for all his HP
		std::cout << "\nKyle has hit Trent with his bullets...\n";

		//Set CounterTerrorists1 ("Trent) HP to 0
		CounterTerrorist1.setHealth(0);

		//Terrorist2 hit CounterTerrorist2 for 50 damage
		std::cout << "\nTodd has hit Zack for 50 damage...\n";

		//Set CounterTerrorist2 ("Zack") HP to 50
		CounterTerrorist2.setHealth(50);

		//Terrorist4 hit CounterTerrorist3 for all his HP
		std::cout << "\nMichael has hit John with his bullets...\n";

		//Set CounterTerrorist3 ("John") HP to 0 HP
		CounterTerrorist3.setHealth(0);

		//Terrorist5 hit CounterTerrorist4, and 5
		std::cout << "\nHowe has hit Bill, and Austin with his bullets...\n";

		//Set CounterTerrorist4, and 5 ("Bill, and Austin) to 0 HP
		CounterTerrorist4.setHealth(0);
		CounterTerrorist5.setHealth(0);

		//CounterTerrorists in action
		CounterTerrorist2.defuseBomb();

		std::cout << "*****  Bomb has been Defused, CounterTerrorist Win  *****\n" << std::endl;

		//Pause to make the program easier to look at / understand
		system("pause");

		std::cout << "\n\n Remaining Terrorist HP\n";

		//End of round Terrorist HP stats
		std::cout << "\n" << Terrorist1.Name << " Has " << Terrorist1.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << Terrorist2.Name << " Has " << Terrorist2.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << Terrorist3.Name << " Has " << Terrorist3.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << Terrorist4.Name << " Has " << Terrorist4.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << Terrorist5.Name << " Has " << Terrorist5.getHealth() << " Health Points!\n\n";

		//Pause to make the program easier to look at / understand
		system("pause");

		std::cout << "\n\n Remaining CounterTerrorist HP\n";
		//End of round CounterTerrorist HP stats
		std::cout << "\n" << CounterTerrorist1.Name << " Has " << CounterTerrorist1.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << CounterTerrorist2.Name << " Has " << CounterTerrorist2.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << CounterTerrorist3.Name << " Has " << CounterTerrorist3.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << CounterTerrorist4.Name << " Has " << CounterTerrorist4.getHealth() << " Health Points!\n\n";
		std::cout << "\n" << CounterTerrorist5.Name << " Has " << CounterTerrorist5.getHealth() << " Health Points!\n\n";

		//Have our Terrorists, and CounterTerrorists Talk using our class methods
		std::cout << "\nSome after round Talk between the two teams...";
		Terrorist1.Talk("That was a close round!");
		CounterTerrorist1.Talk("You've got to be kidding me, it wasn't close at all");
		CounterTerrorist2.Talk("Zack", "Will you two stop arguing so we can start the next round.");

		//Create a scope so we can demonstrate the memory management use using smart pointers
		//In specific a unique_ptr
		std::cout << "\n\n\n\n\nEntering our scope inside of Main\n";
		{
			std::cout << "\n\nYou are now inside of the scope\n";
			//Make a story to fit the use of a unique_ptr in the program/game
			std::cout << "\n\nWelcome to the regeneration room for the eliminated Terrorist, and Counter Terrorists\n";
			std::cout << "\n\nHere we can bring back all of the eliminated players during round 1, so there can be a round 2\n";
			std::unique_ptr<ClassReplicantPlayers> unique_replicant = std::make_unique<ClassReplicantPlayers>();

			//Show that our unique_ptr works by calling the talk method
			unique_replicant->Talk("Austin", "I was regenerated using a unique_ptr :)");
			unique_replicant->setHealth(100);

			//Let the user know that we are leaving scope so our unique_ptr will be deconstructed
			std::cout << "\n\nYou are now leaving the unique_ptr scope, This will result in the destruction of Austin..." << std::endl;
		}
		std::cout << "\n\nYou are now out of scope, which means Austin has been deconstructed..." << std::endl;

		//Checks if the user wants to play again
		std::cout << "\nWould you like to play again? (y/n)" << std::endl;

		//Inputs the users choice
		std::cin >> choice;

		//2 if statements to check what the user input
		//if 'y' then it will take us back to the menu
		if (choice == 'y')
		{
			displayMenu();
		}

		//if 'n' then it will close the program
		if (choice == 'n')
		{
			//sets isAlive to false so the loop ends
			isAlive = false;
			//Closes the program
			return 0;
		}
	}
}

//Defining what our displayMenu() function does
void displayMenu()
{
	//Display text for the menu 
	std::cout << "\n\nIt's a 5 v 5 First Person Shooter, You play as either a Terrorist or a Counter Terrorist" << std::endl;
	std::cout << "\n\nTo win as the Terrorist, You must either plant the bomb, or eliminate the Counter Terrists" << std::endl;
	std::cout << "\n\nTo win as the Counter Terrorists, You must defuse the bomb once it has been planted, or to eliminate the Terrorists" << std::endl;
	std::cout << "\n\n ***** May the Best Player Win! *****\n\n" << std::endl;
}

