/*
* COMP142
* Spring 2016
* Assignment 3
* 11 Febuary, 2016
* William Fu
*/

#include <iostream>
#include "Slayer.h";
using namespace std;

//Constructor 
Slayer:: Slayer(){
	name = "Dick Grayson";
	numSlays= 24;
	apocalypsesStopped=3;
	chosenOne = true;
	
}

//Parameterized Constructor
Slayer:: Slayer( string name, int s, int a, bool b){
	name = name;
	numSlays = s;
	apocalypsesStopped = a;
	chosenOne=b;
}

//Slayer kills if true  string = weapon
bool Slayer:: fight(Vampire, string weapon){
	if (weapon == "garlic bread" || weapon == "stake")
		return true;
	else if (weapon == "holy water" || weapon == "sunlight")
		return false;
}


//Sets name of Slayer
void Slayer:: setName (string n){
	name = n;
}

//return slayer name
string Slayer::getName(){
	return name;
}

//increases the count of kills slayer has
void Slayer:: incrSlays(){
	numSlays+=1;
}

//increases the count of apocalypeses the slayer has prevented
void Slayer:: incrApocalypsesStopped(){
	apocalypsesStopped+=1;
}

//returns slayer kills
int Slayer:: getSlays(){
	return numSlays;
}
