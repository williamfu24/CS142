/*
* COMP142
* Spring 2016
* Assignment 4 Part 2
* 17 March, 2016
* William Fu
*/

#include <iostream>
#include "Latte.h";
#include "Frappuccino.h";
#include <string>
using namespace std;

int main(){

	//Create the 4 drinks
	//Default
	Latte a;
	Frappuccino b;

	//Parameterized
	Latte c("venti", true, true, true, "nutmeg");
	Frappuccino d("grande", "vanilla", "milk", true, true);

	//call set function for each drink
	//drink a
	a.setIced(true); //Changed drink to iced
	//drink b
	b.setSize("grande"); //Changed size to grande
	//drink c
	c.setSoy(false); //Change soymilk to false
	//drink d
	d.setCream(false); //Change whipped cream to false

	//print statements
	cout<< "Reciept: \n" << a; //print out reciept for drink a. latte
	cout<< "Reciept: \n" << b; //print out reciept for drink b. frap
	cout<< "Reciept: \n" << c; //print out reciept for drink c. latte 2
	cout<< "Reciept: \n" << d; //print out reciept for drink b. frap 2

}
