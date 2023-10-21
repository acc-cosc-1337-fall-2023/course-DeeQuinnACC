#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	TicTacToe ttt;
	ttt.start_game("X");

	REQUIRE(ttt.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe ttt;
	ttt.start_game("O");

	REQUIRE(ttt.get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected")
{
	TicTacToe ttt;

	ttt.start_game("X");

	ttt.mark_board(1); //X
	ttt.mark_board(2); //O
	ttt.mark_board(3); //X
	ttt.mark_board(5); //O
	ttt.mark_board(4); //X
	ttt.mark_board(7); //O
	ttt.mark_board(6); //X
	ttt.mark_board(9); //O
	ttt.mark_board(8); //X

	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "C");
}

TEST_CASE("Test win by first column")
{
	TicTacToe ttt;

	ttt.start_game("X");

	ttt.mark_board(1); //X
	ttt.mark_board(2); //O
	ttt.mark_board(4); //X
	ttt.mark_board(5); //O
	ttt.mark_board(7); //X

	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
	TicTacToe ttt;

	ttt.start_game("X");

	ttt.mark_board(2); //X
	ttt.mark_board(1); //O
	ttt.mark_board(5); //X
	ttt.mark_board(4); //O
	ttt.mark_board(8); //X

	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
	TicTacToe ttt;

	ttt.start_game("X");

	ttt.mark_board(3); //X
	ttt.mark_board(1); //O
	ttt.mark_board(6); //X
	ttt.mark_board(4); //O
	ttt.mark_board(9); //X

	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "X");
}

TEST_CASE("Test win by first row")
{
	TicTacToe ttt;

	ttt.start_game("X");

	ttt.mark_board(1); //X
	ttt.mark_board(4); //O
	ttt.mark_board(2); //X
	ttt.mark_board(5); //O
	ttt.mark_board(3); //X

	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
	TicTacToe ttt;

	ttt.start_game("X");

	ttt.mark_board(4); //X
	ttt.mark_board(1); //O
	ttt.mark_board(5); //X
	ttt.mark_board(3); //O
	ttt.mark_board(6); //X

	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
	TicTacToe ttt;

	ttt.start_game("X");

	ttt.mark_board(7); //X
	ttt.mark_board(1); //O
	ttt.mark_board(8); //X
	ttt.mark_board(4); //O
	ttt.mark_board(9); //X

	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left")
{
	TicTacToe ttt;

	ttt.start_game("X");

	ttt.mark_board(1); //X
	ttt.mark_board(3); //O
	ttt.mark_board(5); //X
	ttt.mark_board(4); //O
	ttt.mark_board(9); //X

	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left")
{
	TicTacToe ttt;

	ttt.start_game("X");

	ttt.mark_board(3); //X
	ttt.mark_board(1); //O
	ttt.mark_board(5); //X
	ttt.mark_board(4); //O
	ttt.mark_board(7); //X

	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "X");
}

