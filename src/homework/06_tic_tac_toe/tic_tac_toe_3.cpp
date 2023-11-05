#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool TicTacToe3::check_column_win()
{
    //Go through {0, 3, 6}, {1, 4, 7}, {2, 5, 8}
    for(int i=0; i<3; i += 1)
    {
        std::string one = pegs[i], two = pegs[i+3], three = pegs[i+6];
        if(one == two && two == three && one != " ")
        {
            return true;
        }
    }
    
    return false;
}
/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win()
{
    //Go through {0, 1, 2}, {3, 4, 5}, {6, 7, 8}
    for(int i=0; i<9; i += 3)
    {
        std::string one = pegs[i], two = pegs[i+1], three = pegs[i+2];
        if(one == two && two == three && one != " ")
        {
            return true;
        }
    }
    
    return false;
}
/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe3::check_diagonal_win()
{
    //No loop, as it doesn't make sense
    //Check left-up, middle, right-down {0, 4, 8}, then right-up, middle, left-down{2, 4, 6}
    std::string leftUp = pegs[0], rightUp = pegs[2], leftDown = pegs[6], rightDown = pegs[8], middle = pegs[4];
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