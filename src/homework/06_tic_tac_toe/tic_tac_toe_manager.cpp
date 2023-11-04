//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    //std::cout<<"\n"<<x_win<<"/"<<o_win<<"/"<<ties;
    x = x_win;
    o = o_win;
    t = ties;
}

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    //std::cout<<"\nWinner: "<<b.get_winner();
    update_winner_count(b.get_winner());
}

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_win += 1;
    }
    else if(winner == "O")
    {
        o_win += 1;
    }
    else if(winner == "C")
    {
        ties += 1;
    }
    else
    {
        std::cout<<"\nERROR: update_winner_count given invalid value for winner.\n";
    }
}

std::ostream& operator <<(std::ostream& out, TicTacToeManager& tm)
{
    for(int i=0; i<tm.games.size(); i++)
    {
        out<<tm.games[i]<<"\nWinner: "<<tm.games[i].get_winner()<<"\n";
    }

    return out;
}