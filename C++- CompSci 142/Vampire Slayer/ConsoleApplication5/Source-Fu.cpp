/*
* COMP142
* Spring 2016
* Assignment 3
* 11 Febuary, 2016
* William Fu
*/

#include <iostream>
#include "Slayer.h";
#include "Vampire.h";
using namespace std;

int main(){
	
	//Declarations
	//Options for weapons= garlic bread, stake, holy water and sunlight
	string weapon1 = "garlic bread";
	string weapon2 = "stake";

	//Create Slayer
	Slayer Slayer1;

	//Name Slayer Buffy
	Slayer1.setName("Buffy");
	
	// Create Vampire with name Angel and Spike
	Vampire Vampire1;
	Vampire Vampire2("Angel", true, "1776", false);
	Vampire1.setName ("Spike");
	
	//Get functions to print to screen
	cout<< "\nThere is a showdown between " << Slayer1.getName() << ", " 
		<<  Vampire1.getName() << " and " << Vampire2.getName() << " in the dinner\n";
	cout << Vampire1.getName() << " was sired on " << Vampire1.getSired() << " and " 
		<< Vampire2.getName() << " was sired on " << Vampire2.getSired()<< endl;
	
	//Spike bites innocent human
	if (Vampire1.bite("Barbra") == true){
		cout << "Spike bit Barbra on her neck\n";
	}
	else
		cout<< "Spike somehow didnt bite Barbra's neck\n";

	//Buffy fight Spike
	cout<< "Buffy fights Spike with "<< weapon1 <<" she found\n";
	if (Slayer1.fight(Vampire1, weapon1) == true){
		Slayer1.incrSlays();
		Vampire1.die(weapon1);
		cout << Slayer1.getName() << " has killed " << Slayer1.getSlays() 
			<< " vampires so far\n";
	}
	else 
		cout << "Buffy has been defeated.\n";

	//Buffy fight Angel
	cout<< "Buffy fights Angel with her handy " << weapon2 << endl;
	if (Slayer1.fight(Vampire2, weapon2) == true){
		Slayer1.incrSlays();
		Vampire2.die(weapon2);
		cout << Slayer1.getName() << " has killed " << Slayer1.getSlays() 
			<< " vampires so far\n";
	}
	else
		cout <<"Buffy has been defeated.\n";

	//end resutls
	if (Vampire1.isDead() == true){
		if (Vampire2.isDead() == true){
			Slayer1.incrApocalypsesStopped();
			cout << "Buffy has stopped the vampires!!\n";
		}
	}
	else
		cout<< "Buffy couldnt stop the vampires.\n";
}