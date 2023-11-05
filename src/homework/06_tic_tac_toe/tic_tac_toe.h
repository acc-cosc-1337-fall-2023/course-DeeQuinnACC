//h
#include <string>
#include <vector>
#include <iostream>

#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
public:
    TicTacToe(int size): pegs{size*size, " "}{}

    bool game_over();

    void start_game(std::string first_player);

    void mark_board(int position);

    std::string get_player() const{ return player; }

    std::string get_winner() const{ return winner; }

    //Overload istream and ostream respectively
    friend std::ostream & operator << (std::ostream& out, const TicTacToe& ttt);
    friend std::istream & operator >> (std::istream& in, TicTacToe& ttt);

protected:
    std::vector<std::string> pegs;

    virtual bool check_column_win();

    virtual bool check_row_win();

    virtual bool check_diagonal_win();

private:
    std::string player;

    std::string winner = "C"; //C = tie

    void set_next_player();

    bool check_board_full();

    void clear_board();

    void set_winner();
};

#endif TICTACTOE_H