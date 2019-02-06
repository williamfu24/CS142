#include "Cards.h"

//Default constructor
Card:: Card(){
	//Give attributes reasonable defaults
	color = "B"; //character attribute so one letter
	suit = "S";
	value= 1;
}

Card::Card(char c, char s, int v){
	//Give attributes specific values
	color = c;
	suit = s;
	value = v;
}