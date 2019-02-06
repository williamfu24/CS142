/*
* COMP142
* Spring 2016
* Homework 7
* 5 April, 2016
* William Fu
*/

#include <string>
#include <iostream>
#include <array>
#include "Card.h"
using namespace std;

#ifndef Deck_H_
#define Deck_H_

const int Cards_per_Deck = 52;

class Deck{
	//attributes
private:
	array <Card, 52> Card52; //array called Card52 with 52 blank addr
	int current;

	//functions
public:
	Deck();

	Card getCard();
	Card GetCard(int i);
	void shuffle();

};
#endif