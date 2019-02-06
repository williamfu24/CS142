#include <iostream>;
using namespace std;

int main(){
	enum compare {GREATER, LESS, EQUAL}; //cannot use numbers GREATER = 0 LESS =1 EQUAL = 2 by default
	compare first = GREATER;
	cout<< first << endl;
	
	return 0;
}