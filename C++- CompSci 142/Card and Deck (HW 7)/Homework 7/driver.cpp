/*
* COMP142
* Spring 2016
* Homework 7
* 5 April, 2016
* William Fu
*/

#include "Deck.h"
#include "Card.h"
#include <string>
#include <iostream>

#include <algorithm>
#include <ctime>

#include <vector>
#include <array>
using namespace std;

int main(){
	Deck deck;
	array <Card, 5> Hand;
	deck.shuffle();

	Hand[0] = deck.getCard();
	Hand[1] = deck.getCard();
	Hand[2] = deck.getCard();
	Hand[3] = deck.getCard();
	Hand[4] = deck.getCard();
	cout << "\nCard 1: " << Hand[0];
	cout << "\nCard 2: " << Hand[1];
	cout << "\nCard 3: " << Hand[2];
	cout << "\nCard 4: " << Hand[3];
	cout << "\nCard 5: " << Hand[4];

	cout << "\nHow many cards would you like to discard?";
	int x;
	cin >> x;
	vector<int> discard(x);

	int i;
	for ( i=0; i<x; i++){
		cout<< "\nWhich card would you like discard?";
		int a;
		cin >> a;
		discard.push_back(a);
		Hand[a-1] = deck.getCard();
	}

	cout << "\nCard 1: " << Hand[0];
	cout << "\nCard 2: " << Hand[1];
	cout << "\nCard 3: " << Hand[2];
	cout << "\nCard 4: " << Hand[3];
	cout << "\nCard 5: " << Hand[4];
}