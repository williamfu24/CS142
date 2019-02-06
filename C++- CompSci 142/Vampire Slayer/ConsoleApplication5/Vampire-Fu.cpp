/*
* COMP142
* Spring 2016
* Assignment 3
* 11 Febuary, 2016
* William Fu
*/

#include <iostream>
#include "Vampire.h"
using namespace std;

//Constructor
Vampire:: Vampire(){
	//Fill in attributes
	name = "Damien Wayne";
	isAlive = true;
	dateSired = "1997";
	cape = false;
}

//Parameterized Constructor
Vampire:: Vampire( string n, bool boo, string d, bool c){
	name = n;
	isAlive= boo;
	dateSired = d;
	cape = c;
}

//Does Vampire succed in biting?
bool Vampire:: bite(string victim){
	return true;
}


//Prints how Vampire dies
void Vampire:: die(string weapon){
	cout<< "They killed by " << weapon << endl;
	isAlive=false;
}

//Sets name of Vampire
void Vampire:: setName (string n){
	name = n;
}

//return name of Vampire
string Vampire :: getName(){
	return name;
}

//returns date sired
string Vampire:: getSired(){
	return dateSired;
}

//returns if dead or not
bool Vampire:: isDead(){
	if (isAlive == false)
		return false;
	else 
		return true;
}