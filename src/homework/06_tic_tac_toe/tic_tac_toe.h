//h
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;

#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
public:
    bool game_over();

    void start_game(string first_player);

    void mark_board(int position);

    string get_player() const{ return player; }

    string get_winner() const{ return winner; }

    //Overload istream and ostream respectively
    friend std::ostream & operator << (std::ostream& out, const TicTacToe& ttt);
    friend std::istream & operator >> (std::istream& in, TicTacToe& ttt);

private:
    string player;
    string winner = "C"; //C = tie

    vector<std::string> pegs{9, " "};

    void set_next_player();

    bool check_board_full();

    void clear_board(){ pegs = {9, " "}; }

    bool check_column_win();

    bool check_row_win();

    bool check_diagonal_win();

    void set_winner();
};

#endif TICTACTOE_H