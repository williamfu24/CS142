/*
* COMP142
* Spring 2016
* Homework 7
* 14 April, 2016
* William Fu
*/

#include <iostream>
#include "Bingo.h"
#include <array>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
	BingoCard Card;

	Card.print();
	char x; //letter
	int y; //number
	char win = 'n';
	
	do
	{ 
		cout<< "Please enter your letter: " << endl;
		cin >> x;
		cout<< "Please enter your number: "<< endl;
		cin >> y;
		Card.found(x,y);
		Card.print();
		for (int i = 0; i<5; i++)
			win = Card.CheckCol(i);
		for (int j=0; j<5; j++)
			win = Card.CheckRow(j);
		win = Card.CheckDiag1();
		win = Card.CheckDiag2();
	}
	while (win == 'n');

	cout << "\nCongrats! You Win!!!";

}