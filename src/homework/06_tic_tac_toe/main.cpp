#include <iostream>
#include <string>
#include "tic_tac_toe.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	int userOption = -1;
	do
	{
		string firstPlayer;
		cout<<"\nPlease enter the first player(X or O): ";

		if(firstPlayer != "X" || firstPlayer != "O")
		{
			cout<<"Not a valid option. Defaulting to X.";
			firstPlayer = "X";
		}

		cin>>firstPlayer;

		TicTacToe ttt;
		ttt.start_game(firstPlayer);

		do
		{
			ttt.display_board();

			cout<<"\nPlease enter a number 1-9 (starting from the top left) to place your marker.";
			cout<<"\nOr enter '0' to quit this game.";
			cout<<"\nOption: ";
			cin>>userOption;

			if(userOption == 0)
			{
				cout<<"\nQuitting game...";
			}
			else if(userOption > 0 && userOption < 10)
			{
				ttt.mark_board(userOption);
			}
			else
			{
				cout<<"Invalid option, please enter a number between 1-9, or 0 to quit.";
			}

		} while(userOption != 0 && !ttt.game_over());

		cout<<"\n1 - Play new game";
		cout<<"\n2 - Stop program";
		cout<<"\nOption: ";
		cin>>userOption;

	} while (userOption != 2);

	cout<<"\n\nExiting program...";

	return 0;
}