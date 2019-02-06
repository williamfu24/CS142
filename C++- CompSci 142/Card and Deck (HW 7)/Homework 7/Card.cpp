/*
* COMP142
* Spring 2016
* Homework 7
* 5 April, 2016
* William Fu
*/

#include "Card.h"
#include <string>
#include <iostream>
using namespace std;

//Default
Card:: Card(){
	value = 1;
	suit = 'H';
}

//Parameterized
Card:: Card(int a, char b){
	if (a > 0 || a < 14){
		value = a;
	}
	else{
		cout << "Incorrect value" << endl;
	}

	if (b == 'H' || b == 'D' || b == 'C' || b == 'S'){
		suit = b;
	}
	else{
		cout << "Incorrect value" << endl;
	}
}

//Function
int Card:: getValue(){
	return value;
}

char Card:: getSuit(){
	return suit;
}

void Card:: setValue(int v){
	if (v>0){
		value = v;
	}
	cout<< "Bad input, no change\n";
}

void Card:: setSuit(char s){
	if (s== 'D' || s=='H' ){
		suit = s;
	}
	else if ( s=='C' || s=='S'){
		suit = s;
	}
	else
		cout <<"Bad Input no change \n";
}

// overload of card to help print out needed info
// use : card a = card();
// cout<< "Card: \n" << a; 
ostream &operator <<(ostream &output, const Card &card){
	output<< "\nValue: " << card.value << endl;
	output<< "Suit: " << card.suit << endl;
	return output;
}