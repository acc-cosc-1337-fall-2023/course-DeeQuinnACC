#include <iostream>
#include <string>
#include "tic_tac_toe.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	TicTacToe ttt;
	int userOption = -1;

	//Start of main program loop
	//Loops until userOption isn't 2
	do
	{
		string firstPlayer;

		//Loop until user enters correct first player
		while(firstPlayer != "X" && firstPlayer != "O")
		{
			cout<<"\nPlease enter the first player(X or O)";
			cout<<"\nOption: ";
			cin>>firstPlayer;

			if(firstPlayer == "x")
			{
				firstPlayer = "X";
			}
			else if(firstPlayer == "o")
			{
				firstPlayer = "O";
			}
			else if(firstPlayer != "X" && firstPlayer != "O")
			{
				cout<<"Not a valid option. Please try again.";
			}
		}

		ttt.start_game(firstPlayer);

		//Main gameplay loop
		while(!ttt.game_over() && userOption != 0)
		{
			ttt.display_board();

			cout<<"\nIt is "<<ttt.get_player()<<"'s turn.";
			cout<<"\nPlease enter a number 1-9 to place your marker in the corresponding slot.";
			cout<<"\nOr enter '0' to quit the game.";
			cout<<"\nOption: ";
			cin>>userOption;

			if(userOption == 0)
			{
				cout<<"\nQuitting game...\n";
			}
			else if(userOption > 0 && userOption < 10)
			{
				ttt.mark_board(userOption);
			}
			else
			{
				cout<<"Invalid option, please enter a number between 1-9, or 0 to quit.";
			}
		}
		
		//If the game ended normally...
		if(ttt.game_over())
		{
			ttt.display_board();
			if(ttt.get_winner() == "C")
			{
				cout<<"\nGame results: Cat's Game (Tie)";
			}
			else
			{
				cout<<"\nGame results: Winner is "<<ttt.get_winner();
			}
		}

		cout<<"\n1 - Play new game";
		cout<<"\n2 - Stop program";
		cout<<"\nOption: ";
		cin>>userOption;

	} while (userOption != 2);

	cout<<"\nExiting program...\n";

	return 0;
}