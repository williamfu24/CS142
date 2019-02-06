/*
* COMP142
* Spring 2016
* Homework 7
* 14 April, 2016
* William Fu
*/

#include <iostream>
#include <array>
using namespace std;

#ifndef Bingo_h_
#define Bingo_h_

class BingoCard{
	//attributes
private:
	char win;
	int counter;

public:
	int Card[5][5];
	BingoCard();

	char CheckRow(int r);
	char CheckCol(int c);
	char CheckDiag1();
	char CheckDiag2();

	void found(char a, int b);
	void print();

	char checkTWin();
};

#endif Bingo_h_