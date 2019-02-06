#include <iostream>
#include <string>
#include "Vampire.h"
using namespace std;

Vampire::Vampire() {

  name = "Dracula";

  isAlive = true;

  isBat = false;

  isEvil = true;

}

Vampire::Vampire(string n) {

  name = n;

  isAlive = true;

  isBat = false;

  isEvil = true;

}

void Vampire::setName(string n) {

  name = n;

}

// changeEvil()                                                                                      

// Params: None                                                                                      

// Returns: Void                                                                                     

// If evil, turn good. If good, turn evil.                                                           

void Vampire::changeEvil() {

  isEvil = (isEvil ? false : true);

}

// changeBat()                                                                                       

// Params: None                                                                                      

// Returns: Void                                                                                     

// If bat, turn non-bat. If non-bat, turn bat.                                                       

void Vampire::changeBat() {

  isBat = (isBat ? false : true);

}

// die(string)                                                                                       

// Params: String, the cause of death                                                                

// Returns: void                                                                                     

// Change from alive to dead                                                                         

void Vampire::die(string weapon) {

  isAlive = false;

  cout << name << " is dead due to " << weapon << endl;

}

// print()                                                                                           

// Params: none                                                                                      

// Returns: void                                                                                     

// Prints all pertinent info about the vampire object                                                

void Vampire::print() {

  cout << "Our friend " << name << " is ";

  cout << (isAlive ? "alive" : "dead");

  cout << ", and ";

  cout << (isBat ? "a bat" : "not a bat");

  cout << ", and ";

  cout << (isEvil ? "deadly evil" : "actually quite good");

}

// bite(char)                                                                                        

// Params: char, the first initial of human victim                                                   

// Returns: bool, whether the bite was successful                                                    

// If human victim is R, G, or W -- bite was successful                                              

// If human victim is B, X, or F -- the bite was not successful                                      

bool Vampire::bite(char human) {
	bool result;
	switch(human){
	case 'R':
	case 'G':
	case 'W':
		cout<<"The bite was a success";
		result= true;
		break;
	case 'B':
	case 'X':
	case 'F':
		cout<<"THe bite was a failure";
		result= false;
		break;

return true;                                            

}

// beginSeason(int)                                                                                  

// Params: int, the season number (1-7)                                                              

// Returns: void                                                                                     

// Season 1 -- alive, evil, non-bat    A                                                              

// Season 2 -- dead, evil, non-bat      B                                                            

// Season 3 -- dead, non-evil, bat        C                                                           

// Season 4 -- dead, evil, non-bat      B                                                          

// Season 5 == alive, non-evil, bat         E                                                         

// Season 6 -- alive, evil, non-bat     A                                                             

// Season 7 -- dead, evil, non-bat       B                                                            

void Vampire::beginSeason(int season) {
	switch(season){
	case 1:
	case 6:
		isAlive = true;
		isEvil = true;
		isBat = false;
		break;
	case 2:
	case 4:
	case 7:
		isAlive = false;
		isEvil = true;
		isBat = false;
		break;
	case 3;
		isAlive = false;
		isEvil = false;
		isBat = true;
	case 5;
		isAlive = true;
		isEvil=false;
		isBat=true;
		break;



 }