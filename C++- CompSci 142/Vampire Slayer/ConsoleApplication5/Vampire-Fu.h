/*
* COMP142
* Spring 2016
* Assignment 3
* 11 Febuary, 2016
* William Fu
*/

#include <string>
using namespace std;

#ifndef VAMPIRE_H_
#define VAMPIRE_H_

class Vampire{
	//Attributes
private:
	string name; //Name of Vampire
	bool isAlive; //Is the vampire alive
	string dateSired; //When vampire is made/sired
	bool cape; // Does the vampire have a dracula like cape?

	//Functions
public:
	Vampire();//Default Constructor 
	Vampire (string, bool, string, bool);//Parameterized Constructor 
	bool bite (string); //returns whether bite was successful; parameter is victim
	void die (string); //parameter is method of death (sun, stake etc.)
	void setName (string);// change the object's name
	string getName(); //return the object's name
	string getSired();//returns when vampire was sired
	bool isDead();//returns if object is dead or not
};
#endif