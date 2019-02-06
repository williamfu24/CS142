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
	int numRows;
	cout << "Number of Rows printed? ";
	cin >> numRows;

	int row, Space, Star;

	//Top half of Diamond
	for (row =1; row <= numRows; row++){
		for (Space = numRows - row; Space >=1; Space --){
			cout << " ";
		}
		for (Star = 1; Star <= (row*2)-1; Star++){
			cout << "*";
		}
		cout << "\n";
	}
	
	//Bottom half of Diamond
	for (row = numRows-1; row >=1; row--){
		for (Space =1; Space <= numRows - row; Space++){
			cout << " ";
		}
		for (Star =1 ; Star <= 2*row -1; Star++){
			cout << "*";
		}
		cout << "\n";
	}
}