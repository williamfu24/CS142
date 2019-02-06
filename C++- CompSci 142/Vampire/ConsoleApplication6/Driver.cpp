#include "Vampire.h"
#include <iostream>

using namespace std;

int main () {

  // Create a vampire and have it do stuff                                                                                   

  Vampire spike("Spike");

  spike.changeEvil();

  // Bite Willow. If the switch statement is working correclty,                                                              
  // Willow should die                                                                                                       

  if( spike.bite('W') )

    cout << "Spike killed Willow!\n";

  else

    cout << "Spike bit Willow but she lived!\n";

  // Bite Buffy. If the switch statement is working correctly,                                                               

  // Buffy does not die.                                                                                                     

  if( spike.bite('B') )

    cout << "Spike killed buffy\n";

  else

    cout << "Spike bit buffy but she lived!\n";

  // Start season 1, Spike should be alive, evil, and not a bat                                                              

  spike.beginSeason(1);

  cout << "Here is Spike after season one:\n";

  spike.print();

  cout << endl << endl;

  // Start season 2. Spike should be dead, evil, and not a bat                                                               

  spike.beginSeason(2);

  cout << "After season two:\n";

  spike.print();

  cout << endl << endl;

  // Start season 3. Spike should be dead, non-evil, and a bat                                                               

  spike.beginSeason(3);

  cout << "After season three:\n";

  spike.print();

  cout << endl << endl;

  // Start season 4. Spike should be dead, evil, and not a bat                                                               

  spike.beginSeason(4);

  cout << "After season four:\n";

  spike.print();

  cout << endl << endl;


// Start season 5. Spike should be alive, non-evil, and a bat                                                              

  spike.beginSeason(5);

  cout << "After season five:\n";

  spike.print();

  cout << endl << endl;

  // Start season 6. Spike should be alive, evil, and not a bat                                                              

  spike.beginSeason(6);

  cout << "After season six:\n";

  spike.print();

  cout << endl << endl;

  // Start season 7. Spike should be dead, evil, and not a bat                                                               

  spike.beginSeason(7);

  cout << "After season seven:\n";

  spike.print();

  cout << endl << endl;

  return 0;

}