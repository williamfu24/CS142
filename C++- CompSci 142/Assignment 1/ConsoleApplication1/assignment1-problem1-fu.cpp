/*
*Comp 142
*Spring 2016
*Assignment 1
*28 January, 2016
*William Fu
*/


#include <iostream>
using namespace std;

int main()
{
	//variable declarations
	//windows declarations
	int length_of_window, width_of_window;
	
	//house declarations
	int height_of_house, width_of_house;

	//roof declarations
	int height_of_roof, width_of_roof;
	
	//area declarations
	int area_of_roof;
	int area_of_building;
	int total_area;

	//can declarations
	int can_of_paint;
	int cans_needed;
	int cans_remainder;

	//begining of program
	can_of_paint = 200;

	//obtaining values for variables
	//roof values
	cout << "What is the height of the roof?\n";
	cin >> height_of_roof;
	cout << "What is the width of the roof?\n";
	cin >> width_of_roof;


	//house values
	cout << "What is the height of the house?\n"; 
	cin >> height_of_house;
	cout << "What is the width of the house?\n";
	cin >> width_of_house;

	//window values
	cout << "What is the length of the window?\n";
	cin >> length_of_window;
	cout << "What is the width of the window?\n";
	cin >> width_of_window;

	//calculations for area
	area_of_roof = (height_of_roof * width_of_roof)/2;
	area_of_building = (height_of_house * width_of_house) - (length_of_window * width_of_window);
	total_area = area_of_roof + area_of_building;

	//cans calculation
	cans_needed= total_area / can_of_paint;
	cans_remainder = total_area % can_of_paint;
	if (cans_remainder>0)
	{
		cans_needed += 1 ;}

	//ending statements
	cout << "You need to paint " << total_area << " square feet\n";
	cout << "You need " << cans_needed << " cans of paint\n";
}