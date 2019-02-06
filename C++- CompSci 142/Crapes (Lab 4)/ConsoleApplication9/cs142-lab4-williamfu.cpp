//Bugs
//1. Infinite Loop. Fix: modify the gameover as you win. Keeps loop from playing forever
//2. End game when 'y' to continue. 
//3. When Win dosent add winning to wallet
//4. Case 11 is not present. No winning on breakout 11. Add case 11
//5. Even with first win 7, prints you lose
//6. After roll point ends game anyways
// Plays the game of craps.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice();// function prototype to roll two dice

int main() {
  int wallet = 1000;
  bool gameOver = false;
  srand((unsigned int)time(NULL)); // Seed the random number generator

  while (!gameOver) {
      cout << "Enter amount to bet. You have $" << wallet << endl;
      int bet;
      cin >> bet;
      if (bet <= 0)
	cout << "Bet must be positive." << endl;
      else if (bet > wallet)
	cout << "You don't have that much money." << endl;
      else {
	  // Make initial roll
	  int roll = rollDice();
	  cout << "You rolled " << roll << endl;
	  // Check for a win or loss or the point
	  switch (roll) {
	    case 7:
		case 11:{
	      cout << "You win!" << endl;
	      wallet += bet;
		  break;
		  gameOver = true; //Fix 1//
			   }
	    case 2:
	    case 3:
	    case 12:{ //added brackets. needed?//
	      cout << "You lose." << endl;
	      wallet -= bet;
	      break;
				}
	    default:{
	      // Continue rolling until we roll the point
	      // or 7
	      int point = roll;
	      cout << "The point is " << point << endl;
	      do {
		  roll = rollDice();
		  break;//asdfagd
		  cout << "You rolled " << roll << endl;
		  if (roll == 7) {
		      cout << "You lose." << endl;
		      wallet -= bet;
			  gameOver = true; //Fix 2??
		    }
		  else if (roll == point) {
		      cout << "That matches the point!" <<
			" You win!" << endl;
		      wallet += bet;
		    }
		  }
		 while ((roll != 7) || (roll != point)); 
				}
	}
      if (wallet == 0) {
	  cout << "You are penniless. Thanks for playing." << endl;
	  gameOver = true;
	}
      else{
	  cout << "Play again? (y/n)" << endl;
	  char c;
	  cin >> c;
	  if (c=='n')
	    gameOver = true;
	}
      cout << "You ended the game with $" << wallet << endl;
    }


  return 0;
}

// Simulate rolling two dice.  We need a separate call
// to rand() for each die roll to get the same distribution
// as rolling two actual dice.
int rollDice() {
  return (rand() % 6 + rand() % 6 + 2);
}
