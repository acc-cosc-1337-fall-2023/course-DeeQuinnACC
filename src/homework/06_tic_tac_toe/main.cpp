#include <iostream>
#include <string>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout;
using std::cin;
using std::string;
using std::unique_ptr;
using std::make_unique;

int main() 
{
	TicTacToeManager tm;
	int user_option;
	unique_ptr<TicTacToe> ttt = nullptr;
	int board_size;
	int x_wins = 0, o_wins = 0, ties = 0;

	//Start of main program loop
	//Loops until user_option isn't 2
	do
	{
		ttt.reset();
		user_option = -1;
		//User picks either 3x3 or 4x4
		while(user_option != 1 && user_option != 2)
		{
			cout<<"\nPick the size of the TicTacToe board:";
			cout<<"\n1: 3x3";
			cout<<"\n2: 4x4";
			cout<<"\nOption: ";
			cin>>user_option;

			if(user_option != 1 && user_option != 2)
			{
				cout<<"ERROR: Please enter a valid option (1 or 2).";
			}
		}

		if(user_option == 1)
		{
			ttt = make_unique<TicTacToe3>();
			board_size = 9;
		}
		else
		{
			ttt = make_unique<TicTacToe4>();
			board_size = 16;
		}

		//Get first player
		cin>>*ttt;

		//Main gameplay loop
		while(!ttt->game_over() && user_option != 0)
		{
			cout<<*ttt;

			cout<<"\nIt is "<<ttt->get_player()<<"'s turn.";
			cout<<"\nPlease enter a number that corresponds to the slot you want to place your marker in.";
			cout<<"\nOr enter '0' to quit the game.";
			cout<<"\nOption: ";
			cin>>user_option;

			if(user_option == 0)
			{
				cout<<"\nQuitting game...\n";
			}
			else if(user_option > 0 && user_option < board_size + 1)
			{
				ttt->mark_board(user_option);
			}
			else
			{
				cout<<"Invalid option, please enter a valid slot, or 0 to quit.";
			}
		}
		
		//If the game ended normally...
		if(ttt->game_over())
		{
			//Display results
			cout<<*ttt;
			
			if(ttt->get_winner() == "C")
			{
				cout<<"\nGame results: Cat's Game (Tie)";
			}
			else
			{
				cout<<"\nGame results: Winner is "<<ttt->get_winner();
			}

			//Save to manager
			tm.save_game(std::move(ttt));
		}
		else
		{
			ttt.reset(); //Just so ttt is blank if the user picks a new game
		}

		//Get total score, display
		tm.get_winner_total(x_wins, o_wins, ties);
		cout<<"\n\nWinner Total(x wins/o wins/cat's)";
		cout<<"\n"<<x_wins<<"/"<<o_wins<<"/"<<ties<<"\n";

		cout<<"\n1 - Play new game";
		cout<<"\n2 - Stop program";
		cout<<"\nOption: ";
		cin>>user_option;

	} while (user_option != 2);

	cout<<"\n================\nAll games played\n================";
	cout<<tm<<"\n";

	return 0;
}