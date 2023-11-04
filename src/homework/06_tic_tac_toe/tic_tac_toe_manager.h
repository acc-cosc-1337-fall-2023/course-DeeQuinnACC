//h
#include "tic_tac_toe.h"

#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager
{
public:
    void save_game(TicTacToe b);
    //x gets x_win value, o gets o_win value, t gets ties value
    void get_winner_total(int& x, int& o, int& t);
    //overload ostream to display all games played in a session
    friend std::ostream& operator <<(std::ostream& out, TicTacToeManager& tm);

private:
    std::vector<TicTacToe> games;
    int x_win{0};
    int o_win{0};
    int ties{0};

    void update_winner_count(string winner);

};

#endif TICTACTOEMANAGER_H