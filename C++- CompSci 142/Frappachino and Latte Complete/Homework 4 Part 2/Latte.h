/*
* COMP142
* Spring 2016
* Assignment 4
* 25 Febuary, 2016
* William Fu and Mik Eibusa
*/

#include <string>
using namespace std;

#ifndef LATTE_H_
#define LATTE_H_

class Latte{
	//Attributes
private:
	string description;
	string size; // tall, grande, venti
	int price; //starting $3
	bool isIced; 
	bool SoyMilk;
	bool ExtraShot;
	string sprinkles; //chocolate, nutmeg, cinnamon

	//Functions
public:
	latte();
	latte(string, bool, bool, bool, string);
	
	int getPrice();
	
	void setSize(string);
	void setIced(bool);
	void setSoy(bool);
	void setShot(bool);
	void setSprinkle(string);
	
	friend ostream &operator << (ostream &, const Latte &); //should print out all aspects of the Latte

};
#endif