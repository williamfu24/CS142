/*
* COMP142
* Spring 2016
* Assignment 4
* 25 Febuary, 2016
* William Fu and Mik Eibusa 
*/

#include <iostream>
#include "Latte.h";
using namespace std;

//Constructor 
Latte:: latte(){
	description = "Rich espresso balanced with steamed milk serves"
		"as the perfect base for whatever flavors you choose to add";
	size = "tall";
	price = 3;
	isIced = false;
	SoyMilk = false;
	ExtraShot = false;
	sprinkles = "Chocolate";
}

//Parameterized Constructor
Latte:: latte(string s, bool i, bool m, bool e, string t){
	description = "Rich espresso balanced with steamed milk serves "
	 "as the perfect base for whatever flavors you choose to add.";
	price = 3;
	size = s;
	isIced = i;
	SoyMilk = m;
	ExtraShot = e;
	sprinkles= t;
}

//Returns the price
int Latte:: getPrice(){
	return price;
}

//Sets the size
void Latte:: setSize(string a){
	size = a;
	if (size == "grande"){
		price += 1;
	}
	else if (size == "venti"){
		price += 2;
	}
	else{
		price +=0;
	}
}

//Sets if the drink is Iced or not
void Latte:: setIced(bool a){
	isIced = a;
	if (isIced == true){
		price += 1;
	}
	else{
		price += 0;
	}
}

//Sets if the Drink is Soymilk or milk
void Latte:: setSoy(bool s){
	SoyMilk = s;
	if (SoyMilk == true){
		price += 1;
	}
	else{
		price += 0;
	}
}

//Sets if extra shot
void Latte:: setShot(bool b){
	ExtraShot = b;
	if (ExtraShot = true){
		price += 2;
	}
	else{
		price += 0;
	}
}

// Sets what kind of sprinkles
void Latte:: setSprinkle(string c){
	sprinkles=c;
	if (sprinkles == "nutmeg" || sprinkles == "cinnamon"){
		price += 1;
	}
	else{
		price += 0;
	}
}

// overload of latte to help print out needed info
// use : latte a = latte();
// cout<< "Reciept: \n" << a; 
ostream &operator <<(ostream &output, const Latte &latte){
	output<< "Size: " << latte.size << endl;
	output<< "Iced?: " << latte.isIced << endl;
	output<< "Soy Milk?: " << latte.SoyMilk << endl;
	output<< "Extra Shot?: " << latte.ExtraShot<< endl;
	output<< "Sprinkles: " << latte.sprinkles << endl;
	output<< "Price: " << latte.price << endl;
	return output;
}