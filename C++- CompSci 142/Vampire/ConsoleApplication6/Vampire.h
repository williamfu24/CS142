#include <iostream>
using namespace std;

#ifndef VAMPIRE_H_
#define VAMPIRE_H_

class Vampire {

 private:

  string name;

  bool isAlive;

  bool isBat;

  bool isEvil;

 public:

  Vampire(); // default constructor                                                                  

  Vampire(string); // constructor to set name                                                        

  // set and get functions                                                                           

  string getName() const { return name; }

  bool getIsAlive() const { return isAlive; }

  bool getIsBat() const { return isBat; }

  bool getIsEvil() const { return isEvil; }

  void setName(string);

  void changeEvil();

  void changeBat();

  void die(string);

  // print all relevant info about the vamp.                                                         

  void print();

  // bite function                                                                                   

  bool bite(char);

  // start a new TV season                                                                           

  void beginSeason(int);

};

#endif