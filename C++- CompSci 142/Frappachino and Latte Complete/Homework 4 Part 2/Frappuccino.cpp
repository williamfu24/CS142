/*
* COMP142
* Spring 2016
* Assignment 4
* 25 Febuary, 2016
* William Fu and Mik Eibusa 
*/

#include <iostream>
#include "Frappuccino.h";
using namespace std;

//Constructor
Frappuccino:: frap(){
	description = "A nice Coffee with other base ingredient, blended with "
		"ice and other various ingredients, usually topped with whipped cream";
	size = "tall";
	flavor = "vanila";
	price = 4;
	dairy = "milk";
	WhippedCream = true;
	caramel = false;
}

//Parameterized Constructor
Frappuccino:: frap(string a, string b, string c, bool d, bool e){
	description = "A nice Coffee with other base ingredient, blended with "
		"ice and other various ingredients, usually topped with whipped cream";
	price = 4;
	size = a;
	flavor = b;
	dairy = c;
	WhippedCream = d;
	caramel = e;
}

//Get Price
int Frappuccino:: getPrice(){
	return price;
}

// Set size
void Frappuccino:: setSize(string a){
	size = a;
	if (size == "grande"){
		price += 1;
	}
	else if (size == "venti"){
		price +=2;
	}
	else{
		price +=0;
	}
}

//Set flavor
void Frappuccino:: setFlavor(string b){
	flavor = b;
	if (flavor == "caramel" || flavor == "mocha"){
		price +=1;
	}
	else{
		price += 0;
	}
}

// Set the type of dairy used
void Frappuccino:: setDairy(string d){
	dairy = d;
	if (dairy == "soy"){
		price += 1;
	}
	else if (dairy == "coconut milk"){
		price += 2;
	}
	else{
		price += 0;
	}
}

// Set whipped cream or not
void Frappuccino:: setCream(bool a){
	WhippedCream = a;
}

//Set caramel aswell or not
void Frappuccino:: setCaramel(bool c){
	caramel = c;
	if (caramel == true){
		price += 1;
	}
	else{
		price += 0;
	}
}

// overload of frappuccino to help print out needed info
// use : frappuccino a = frap();
// cout<< "Reciept: \n" << a; 
ostream &operator <<(ostream &output, const Frappuccino &frap){
	output<< "Size: " << frap.size << endl;
	output<< "Flavor: " << frap.flavor << endl;
	output<< "Dairy: " << frap.dairy<< endl;
	output<< "Whipped Cream?: " << frap.WhippedCream<< endl;
	output<< "Caramel?: " << frap.caramel << endl;
	output<< "Price: " << frap.price << endl;
	return output;
}
