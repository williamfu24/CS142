/*
*Comp142
*Spring 2016
*Assignment 2
*4 Febuary, 2016
*William Fu
*/

#include <iostream>
using namespace std;

	
int main(){
	cout << "3 rounds of play. Most points win\n";

	//Variable Declaration
	char Player1Choice;
	char Player2Choice;
	int Player1Win=0;
	int Player2Win=0;
	unsigned int counter=0;
	
	//do while loop to make 3 rounds before determining winner
	do
	{
		counter+=1;

		//do while loop for correct inputs
		do
		{
			cout << "Player 1 please choose from R, P, or S\n";
			cin >> Player1Choice;
		} while (Player1Choice != 'R' && Player1Choice != 'P' && Player1Choice != 'S');
		
		
		//do while loop for correct inputs
		do
		{
			cout << "Player 2 please choose from R, P, or S\n";
			cin >> Player2Choice;
		} while (Player2Choice != 'R' && Player2Choice != 'P' && Player2Choice != 'S');
		
		
		//Player1 = R if's
		if (Player1Choice == 'R')
		{
			if(Player2Choice == 'R')
			{
			cout << "This round is a tie\n";
			}
			else if (Player2Choice == 'P')
			{
				Player2Win +=1;
				cout << "Paper covers rock - Player 2 Wins\n";
			}
			else if (Player2Choice == 'S')
			{
				Player1Win +=1;
				cout << "Rock smashes scissors - Player 1 Wins\n";
			}
		}
		//Player1 = P if's
		else if (Player1Choice == 'P')
		{
			if (Player2Choice == 'R')
			{
				Player1Win +=1;
				cout << "Paper covers rock - Player 1 Wins\n";
			}
			else if (Player2Choice == 'P')
				cout << "This round is a tie\n";
			else if (Player2Choice == 'S')
			{
				Player2Win +=1;
				cout << "Scissors cut paper - Player 2 Wins\n";
			}
		}
		//Player1 = S if's
		else if (Player1Choice == 'S')
		{
			if (Player2Choice == 'R')
			{
				Player2Win +=1;
				cout << "Rock smashes scissors - Player 2 Wins\n";
			}
			else if (Player2Choice == 'P')
			{
				Player1Win +=1;
				cout << "Scissor cuts paper - Player 1 Wins\n";
			}
			else if (Player2Choice == 'S')
				cout << "This round is a tie\n";
		}
	}while (counter<3);

	
	//winning statements
	if (Player1Win==Player2Win)
	{
		cout << "Its a tie!!!\n";
	}
	else if(Player1Win>Player2Win)
	{
		cout<< "Player 1 wins!\n";
	}
	else
	{
		cout << "Player 2 wins!\n";
	}
}