//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    if(check_column_win())
    {
        set_winner();
        return true;
    }    
    else if(check_row_win())
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        return true;
    }
    else
    {
        return false;
    }

}

void TicTacToe::start_game(string first_player)
{
    if(first_player != "X" && first_player != "O")
    {
        return;
    }
    
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    //cout<<"\n"<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2];
    //cout<<"\n"<<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5];
    //cout<<"\n"<<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8]<<"\n";
    cout<<"\n";

    for(int i=0; i<9; i++)
    {
        //If no one has placed a marker on a slot, fill it with the number the user needs to input
        if(pegs[i] == " ")
        {
            cout<<(i + 1);
        }
        else
        {
            cout<<pegs[i];
        }

        //At 2, 5, and 8, do a new line. Otherwise, place a |
        if((i + 1) % 3 == 0)
        {
            cout<<"\n";
        }
        else
        {
            cout<<"|";
        }
    }
}


void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}
bool TicTacToe::check_board_full()
{
    for(int i = 0; i < pegs.capacity(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    } 

    return true;
}

bool TicTacToe::check_row_win()
{
    //Go through {0, 1, 2}, {3, 4, 5}, {6, 7, 8}
    for(int i=0; i<9; i += 3)
    {
        string one = pegs[i], two = pegs[i+1], three = pegs[i+2];
        if(one == two && two == three && one != " ")
        {
            return true;
        }
    }
    
    return false;
}

bool TicTacToe::check_column_win()
{
    //Go through {0, 3, 6}, {1, 4, 7}, {2, 5, 8}
    for(int i=0; i<3; i += 1)
    {
        string one = pegs[i], two = pegs[i+3], three = pegs[i+6];
        if(one == two && two == three && one != " ")
        {
            return true;
        }
    }
    
    return false;

}

bool TicTacToe::check_diagonal_win()
{
    //No loop, as it doesn't make sense
    //Check left-up, middle, right-down {0, 4, 8}, then right-up, middle, left-down{2, 4, 6}
    string leftUp = pegs[0], rightUp = pegs[2], leftDown = pegs[6], rightDown = pegs[8], middle = pegs[4];
    if(middle == " ")
    {
        return false;
    }
    else if(leftUp == middle && middle == rightDown)
    {
        return true;
    }
    else if(rightUp == middle && middle == leftDown)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}