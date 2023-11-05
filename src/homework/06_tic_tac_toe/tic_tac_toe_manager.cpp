//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    //std::cout<<"\n"<<x_win<<"/"<<o_win<<"/"<<ties;
    x = x_win;
    o = o_win;
    t = ties;
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

void TicTacToeManager::update_winner_count(std::string winner)
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
        out<<*tm.games[i]<<"\nWinner: "<<tm.games[i]->get_winner()<<"\n";
    }

    return out;
}