#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected")
{
	TicTacToe ttt;

	ttt.start_game("X");

	for(int i=1; i <= 9; i++)
	{
		ttt.mark_board(i);
	}

	REQUIRE(ttt.game_over() == true);
}

