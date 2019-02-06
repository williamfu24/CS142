/*
* COMP142
* Spring 2016
* Homework 7
* 5 April, 2016
* William Fu
*/

#include "Deck.h"
#include <string>
#include <iostream>

#include <algorithm>
#include <ctime>
using namespace std;

//Defalut
Deck:: Deck(){
	current = 0;
	int counter = 0;
	int value[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	char suit[] = {'H', 'D', 'S', 'C'};
	for (counter = 0; counter < 52; counter++){
		if (counter < 13){
			Card52[counter] = Card (value[counter], 'H');
		}
		else if (counter < 26){
			Card52[counter] = Card (value[counter-13], 'D');
		}
		else if (counter < 39){
			Card52[counter] = Card (value[counter-26], 'S');
		}
		else{
			Card52[counter] = Card (value[counter-39], 'C');
		}
	}
}

//Functions

Card Deck:: getCard(){
	if (current > -1 || current < 52){
		int x;
		x = current;
		current++;
		return Card52[current];
	}
	else 
		cout << "out of range" << endl;
}

Card Deck:: GetCard(int i){ /////????
	if (i > -1 || i < 52){
		return Card52[i];
	}
	else 
		cout << "out of range" << endl;
}

void Deck:: shuffle(){
	random_shuffle (&Card52[0], &Card52[51]);
}
