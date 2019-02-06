#ifndef CARD_H_
#define CARD_H_

class Card {
// Attributes go here
private:
	char color;
	char suit;
	int value;
public:
	Card(); //default constructor. no parameters
	Card( char, char, int); //paramterized constructor
};

#endif