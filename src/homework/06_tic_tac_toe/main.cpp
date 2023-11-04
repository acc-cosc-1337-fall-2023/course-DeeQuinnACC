#include <iostream>
#include <string>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	TicTacToeManager tm;
	int userOption = -1;

	int x_wins = 0, o_wins = 0, ties = 0;

	//Start of main program loop
	//Loops until userOption isn't 2
	do
	{
		TicTacToe ttt;

		//Get first player
		cin>>ttt;

		//Main gameplay loop
		while(!ttt.game_over() && userOption != 0)
		{
			cout<<ttt;

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
			//Display results
			cout<<ttt;
			
			if(ttt.get_winner() == "C")
			{
				cout<<"\nGame results: Cat's Game (Tie)";
			}
			else
			{
				cout<<"\nGame results: Winner is "<<ttt.get_winner();
			}

			//Save to manager
			tm.save_game(ttt);
		}

		//Get total score, display
		tm.get_winner_total(x_wins, o_wins, ties);
		cout<<"\n\nWinner Total(x wins/o wins/cat's)";
		cout<<"\n"<<x_wins<<"/"<<o_wins<<"/"<<ties<<"\n";

		cout<<"\n1 - Play new game";
		cout<<"\n2 - Stop program";
		cout<<"\nOption: ";
		cin>>userOption;

	} while (userOption != 2);

	cout<<"\n================\nAll games played\n================";
	cout<<tm;

	return 0;
}