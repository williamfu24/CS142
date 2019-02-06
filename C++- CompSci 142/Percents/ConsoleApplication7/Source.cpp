#include <iostream>
#include <cstdlib>
using namespace std;
int toPercent (float decimal);

void main() {

 int a, b;
 float c;
 int cAsPercent;

 cout << "Enter two Integers >";
 cin >> a >> b;

 if (a = b) cout << "They are Equal!\n";
 else if (a > b) cout << "The first one is bigger!\n";
 else cout << "The second one is bigger!\n";

 cout << "Enter a Decimal to be Converted to Percent >";

 cin >> c;

 cAsPercent = toPercent(c);

 cout << "That's " << cAsPercent << "%\n";

 cout << endl << endl;

 system("pause");

}

/* ToPercent():

Converts a given float (eg 0.9) to a percentage (90).

*/

int toPercent (float decimal) {

 int result;

 result = (decimal) * 100;

 return result;

}
