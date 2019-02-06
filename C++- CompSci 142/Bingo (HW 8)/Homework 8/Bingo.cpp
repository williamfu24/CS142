/*
* COMP142
* Spring 2016
* Homework 7
* 14 April, 2016
* William Fu
*/


#include "Bingo.h"
#include <array>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

BingoCard:: BingoCard(){

	srand (time(NULL));
	//Random numbers
	for (int i=0; i< 5; i++){
		for (int j=0; j <5; j++){
			if (i == 2 && j == 2)
				Card [2][2] = -1; //Middle spot is X
			else if (j == 0)
				Card [i][j] = rand() % 15+1; //random number between 1-15 for B col
			else if (j == 1)
				Card [i][j] = (rand() % 15+1) +15;// random number between 16-30 for I col
			else if (j == 2)
				Card [i][j] = (rand() % 15+1) +30;// random number between 31-45 for N col
			else if (j == 3)
				Card [i][j] = (rand() % 15+1) +45;// random number between 46-60 for G col
			else
				Card [i][j] = (rand() % 15+1) +60;// random number between 60-75 for O col
		}
	}
}


char BingoCard:: CheckRow(int r){ //Check a specific row
	for (int c=0; c<5; c++)
		if (Card [c][r]== -1)
			counter +=1;
	if (counter == 5){
		win = 'y';
		return win;
	}
	else{
		win = 'n';
		return win;
	}
}

char BingoCard:: CheckCol(int c){ //Check a specific column
	for (int r=0; r<5; r++)
		if (Card[c][r] == -1)
			counter +=1;
	if (counter == 5){
		win = 'y';
		return win;
	}
	else{
		win = 'n';
		return win;
	}
}

char BingoCard:: CheckDiag1(){ //Checks from top left to bottom right
	for (int i = 0; i<5; i++)
		if (Card[i][i] == -1)
			counter +=1;
	if (counter == 5){
		win = 'y';
		return win;
	}
	else{
		win = 'n';
		return win;
	}
}

char BingoCard:: CheckDiag2(){ //Check from bottom left to top right
	counter = 0;
	for (int i = 0; i<5; i++)
		if (Card[i][4-i] == -1)
			counter +=1;
	if (counter == 5){
		win = 'y';
		return win;
	}
	else{
		win = 'n';
		return win;
	}
}

void BingoCard:: found(char a, int b){
	int z;
	z=0;
	if (a == 'B'){
		for (int i = 0; i<5; i++){
			if (Card[i][0]== b){
				Card[i][0] = -1;
				break;
			}
			else
				z+=1;
			if (z>4)
				cout<< "That was an invalid B choice " << endl;
		}
	}
	else if (a == 'I'){
		for (int i = 0; i<5; i++){
			if (Card[i][1]== b){
				Card[i][1] = -1;
				break;
			}
			else
				z+=1;
			if (z>4)
				cout<< "That was an invalid I choice " << endl;
		}
	}
	else if (a == 'N'){
		for (int i = 0; i<5; i++){
			if (Card[i][2]== b){
				Card[i][2] = -1;
				break;
			}
			else
				z+=1;
			if (z>4)
				cout<< "That was an invalid N choice " << endl;
		}
	}
	else if (a == 'G'){
		for (int i = 0; i<5; i++){
			if (Card[i][3]== b){
				Card[i][3] = -1;
				break;
			}
			else
				z+=1;
			if (z>4)
				cout<< "That was an invalid G choice " << endl;
		}
	}
	else if (a == 'O'){
		for (int i = 0; i<5; i++){
			if (Card[i][4]== b){
				Card[i][4] = -1;
				break;
			}
			else
				z+=1;
			if (z>4)
				cout<< "That was an invalid B choice " << endl;
		}
	}
	else
		cout<< "That was an invalid choice" << endl; 
}

void BingoCard:: print(){ //Prints B | I | N | G | O and then board below
	cout<< "\nB | I | N | G | O \n";
	for (int i = 0; i<5; i++){
		for (int j = 0; j<5; j++){
			if (Card[i][j] == -1)
				cout << 'X' << "  ";
			else
				cout << Card[i][j]<< " ";
		}
		cout<< endl;
	}
	cout<< endl;
}

char BingoCard:: checkTWin(){
	if (CheckRow(0) || CheckCol(2)){ //Checks for regular T. Row 0 Column 2 (middle)
		win = 'y';
		return win;
	}
	else if (CheckRow(4) || CheckCol(2)){ //CHecks for upside down T. Row 4 Column 2
		win = 'y';
		return win;
	}
	else if (CheckRow(2) || CheckCol(0)){ // Checks for leftward T. Row 2 (middle) Column 0
		win = 'y';
		return win;
	}
	else if (CheckRow(2) || CheckCol(4)){// Chekcs for rightward T. Row 2 Column 4
		win = 'y';
		return win;
	}
	else{
		win = 'n';	//If T not found
		return win;
	}
}