/*
* COMP142
* Spring 2016
* Homework 7
* 5 April, 2016
* William Fu
*/

#include <string>
#include <iostream>
using namespace std;

#ifndef Card_H_
#define Card_H_

class Card{
	//attributes
private:
	int value;
	char suit;
	//functions
public:
	Card();
	Card(int, char);

	int getValue();
	char getSuit();
	void setValue(int);
	void setSuit(char);

	friend ostream &operator << (ostream &, const Card &); //help print all private attributes
};
#endif