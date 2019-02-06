/*
* COMP142
* Spring 2016
* Assignment 5
* 3 March, 2016
* William Fu 
*/

#include <iostream> 
using namespace std;

int main(){
	int initialHour, initialMinute, finalHour, finalMinute, initialTotal, finalTotal;
	char initialDateTime, finalDateTime;

	cout << "Enter your enterance hour ";
	cin >> initialHour;
	cout << "Enter your enterance min ";
	cin >> initialMinute;
	cout << "Was it in the am or pm? a/p ";
	cin>> initialDateTime;
	if (initialDateTime == 'p'){
		initialTotal = (initialHour * 60) + initialMinute + (12 * 60);
	}
	else{
		initialTotal = (initialHour * 60) + initialMinute;
	}

	cout << "Enter your exit hour ";
	cin >> finalHour;
	cout << "Enter your exit min ";
	cin >> finalMinute;
	cout << "Was it in the am or pm? a/p ";
	cin>> finalDateTime;
	if (finalDateTime == 'p'){
		finalTotal = (finalHour * 60) + finalMinute + (12 * 60);
	}
	else{
		finalTotal = (finalHour * 60) + finalMinute;
	}

	int timeChange;
	
	timeChange = finalTotal - initialTotal;
	if (timeChange < 0){
		timeChange += (24 *60);// need to displace it nearly a day has changed. ex 6am - 5am != -1 hours but 23
	}

	int changeHour, changeMin;

	changeHour = timeChange/60;
	changeMin = timeChange%60;
	
	int price;

	if (changeHour < 1){
		if (changeMin <31){
			price = 0;
		}
		else if (changeMin <60){
			price = 2;
		}
	}
	else if (changeHour == 1){
		if (changeMin < 31){
			price = 3;
		}
		else if (changeMin <60){
			price = 4;
		}
	}
	else if (changeHour ==2){
		if (changeMin < 31){
			price = 5;
		}
		else if (changeMin <60){
			price = 6;
		}
	}

	else if (changeHour ==3){
		if (changeMin < 31){
			price = 7;
		}
		else if (changeMin <60){
			price = 8;
		}
	}

	else if (changeHour ==4){
		if (changeMin < 31){
			price = 9;
		}
		else if (changeMin <60){
			price = 10;
		}
	}

	else if (changeHour ==5){
		if (changeMin < 31){
			price = 11;
		}
		else if (changeMin <60){
			price = 12;
		}
	}

	else if (changeHour ==6){
		if (changeMin < 31){
			price = 13;
		}
		else if (changeMin <60){
			price = 14;
		}
	}

	else if (changeHour ==7){
		price = 15;
	}

	else if (changeHour ==8){
		price = 16;
	}
	else if (changeHour ==9){
		price = 17;
	}
	else if (changeHour ==10){
		price = 18;
	}
	else if (changeHour ==11){
		price = 19;
	}
	else if (changeHour ==12){
		price = 20;
	}
	else{
		price =21;
	}

	cout << "Parking here has cost you: $" << price << endl;
}