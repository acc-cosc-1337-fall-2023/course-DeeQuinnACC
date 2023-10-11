//h
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;

class TicTacToe
{
public:
    bool game_over(){ return check_board_full(); }

    void start_game(string first_player);

    void mark_board(int position);

    string get_player() const{ return player; }

    void display_board() const;

private:
    string player;
    vector<std::string> pegs{"","","","","","","","",""};

    void set_next_player();

    bool check_board_full();

    void clear_board(){ pegs = {"","","","","","","","",""}; }
};