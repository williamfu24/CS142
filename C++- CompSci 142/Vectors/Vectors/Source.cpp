#include <iostream>
#include <vector>
using namespace std;

int main (){
	// Declare a vector
	vector <int> vec;

	// Add element to the end
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(8);

	//Remove an element from the end
	vec.pop_back(); //no need to know end location

	// Remove element at position 1
	vec.erase(vec.begin ()+1);

	// Insert element at position 1
	vec.insert(vec.begin() + 1, 9);

	// Use an iterator to print every element
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
		cout << *it << endl;
	}

	// Print using a for loop
	//for (unsigned int i = 0; i < vec.size (); i++){
		//cout << vec[i] << endl;
	//}
}