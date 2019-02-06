/*
* COMP142
* Spring 2016
* Assignment 3
* 11 Febuary, 2016
* William Fu
*/

#include "Vampire.h"
#include <string>
using namespace std;

#ifndef SLAYER_H_
#define SLAYER_H_

class Slayer{
	//Attributes
private:
	string name; //Name of slayer
	int numSlays;// number of vampire killed
	int apocalypsesStopped; //number of vampires needed to kill to stop apocalypses
	bool chosenOne; // is the slayer the chosen one?

	//Functions
public:
	Slayer();//Default Constructor 
	Slayer( string, int, int, bool); // Parameterized Constructor
	bool fight (Vampire, string); //returns tru is slayer kills vampire. Parameter are vampire and weapon
	void setName (string);//set object's name to string
	string getName();//returns object's name
	void incrSlays();// add one to numSlays
	void incrApocalypsesStopped();// add one to apocalypsesStopped
	int getSlays(); // returns object's slay

};
#endif