/*
* COMP142
* Spring 2016
* Assignment 4
* 25 Febuary, 2016
* William Fu and Mik Eibusa
*/

#include <string>
using namespace std;

#ifndef FRAPPUCCINO_H_
#define FRAPPUCCINO_H_

class Frappuccino{
	//Attributes
private:
	string description;
	string size; //tall, grande, venti
	string flavor; //vanilla, charamel, mocha
	int price; // $4
	string dairy; // milk, soy, coconut milk
	bool WhippedCream;
	bool caramel;

	//Functions
public:
	frap();
	frap(string, string, string, bool, bool);

	int getPrice();
	
	void setSize(string);
	void setFlavor(string);
	void setDairy(string);
	void setCream(bool);
	void setCaramel(bool);
	
	friend ostream &operator << (ostream &, const Frappuccino &); //help print all private attributes
};
#endif