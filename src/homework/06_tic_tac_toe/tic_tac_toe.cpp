//cpp
#include "tic_tac_toe.h"

using std::string;
using std::vector;

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
    //Check that the game isn't already over. If so, refuse to place anything
    //Since this is done before changing players, this doesn't change winner.
    if(game_over())
    {
        return;
    }
    
    pegs[position - 1] = player;
    set_next_player();
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
    return false;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
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

void TicTacToe::clear_board()
{
    for(int i=0; i<pegs.size(); i++)
    {
        pegs[i] = " ";
    }
}

std::ostream& operator << (std::ostream& out, const TicTacToe& ttt)
{
    out<<"\n";

    for(int i=0; i<ttt.pegs.size(); i++)
    {
        //If no one has placed a marker on a slot, fill it with the number the user needs to input
        if(ttt.pegs[i] == " ")
        {
            //If 4x4 and a number less than 10, put a space
            if(i + 1 <= 9 && ttt.pegs.size() == 16)
            {
                out<<" ";
            }
            out<<(i + 1);
        }
        else
        {
            //Put a space before if it is 4x4
            if(ttt.pegs.size() == 16)
            {
                out<<" ";
            }
            out<<ttt.pegs[i];
        }

        //for a 3x3, new lines at 2, 5, 8
        //for a 4x4, new lines at 3, 7, 11, 15
        if(ttt.pegs.size() == 9)
        {
            if((i + 1) % (3) == 0)
            {
                out<<"\n";
            }
            else
            {
                out<<"|";
            }
        }
        else
        {
            if((i + 1) % (4) == 0)
            {
                out<<"\n";
            }
            else
            {
                out<<"|";
            }
        }

    }

    return out;
}

std::istream& operator >> (std::istream& in, TicTacToe& ttt)
{
    /*
    Get the starting player, then starts a new game
    */

   std::string start_player;

   do
   {
        std::cout<<"\nPlease enter the starting player(X or O): ";
        std::cin>>start_player;

        if(start_player == "x")
        {
            start_player = "X";
        }
        else if(start_player == "o")
        {
            start_player = "O";
        }
        else if(start_player != "X" || start_player != "O")
        {
            std::cout<<"ERROR: Please enter either X or O for the starting player.\n";
        }
   } while(start_player != "X" && start_player != "O");

   ttt.start_game(start_player);
}
