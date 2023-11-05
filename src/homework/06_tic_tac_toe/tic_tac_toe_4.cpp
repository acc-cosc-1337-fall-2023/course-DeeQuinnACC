#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/

bool TicTacToe4::check_column_win()
{
    //std::cout<<"\n";
    for(int i=0; i<4; i++)
    {
        std::string one = pegs[i], two = pegs[i+4], three = pegs[i+8], four = pegs[i+12];
        if(one == two && two == three && three == four && one != " ")
        {
            return true;
        }
    }

    return false;
}


/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/

bool TicTacToe4::check_row_win()
{
    for(int i=0; i<16; i+=4)
    {
        std::string one = pegs[i], two = pegs[i+1], three = pegs[i+2], four = pegs[i+3];
        if(one == two && two == three && three == four && one != " ")
        {
            return true;
        }
    }

    return false;
}

/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool TicTacToe4::check_diagonal_win()
{
    std::string one = pegs[0], two = pegs[5], three = pegs[10], four = pegs[15];
    if(one == two && two == three && three == four && one != " ")
    {
        return true;
    }
    one = pegs[3], two = pegs[6], three = pegs[9], four = pegs[12];
    if(one == two && two == three && three == four && one != " ")
    {
        return true;
    }
    
    return false;
}