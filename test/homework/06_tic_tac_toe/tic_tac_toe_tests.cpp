#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();
	ttt->start_game("X");

	REQUIRE(ttt->get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();
	ttt->start_game("O");

	REQUIRE(ttt->get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();

	ttt->start_game("X");

	ttt->mark_board(1); //X
	ttt->mark_board(2); //O
	ttt->mark_board(3); //X
	ttt->mark_board(5); //O
	ttt->mark_board(4); //X
	ttt->mark_board(7); //O
	ttt->mark_board(6); //X
	ttt->mark_board(9); //O
	ttt->mark_board(8); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "C");
}

TEST_CASE("Test win by first column")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();

	ttt->start_game("X");

	ttt->mark_board(1); //X
	ttt->mark_board(2); //O
	ttt->mark_board(4); //X
	ttt->mark_board(5); //O
	ttt->mark_board(7); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();

	ttt->start_game("X");

	ttt->mark_board(2); //X
	ttt->mark_board(1); //O
	ttt->mark_board(5); //X
	ttt->mark_board(4); //O
	ttt->mark_board(8); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();

	ttt->start_game("X");

	ttt->mark_board(3); //X
	ttt->mark_board(1); //O
	ttt->mark_board(6); //X
	ttt->mark_board(4); //O
	ttt->mark_board(9); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by first row")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();

	ttt->start_game("X");

	ttt->mark_board(1); //X
	ttt->mark_board(4); //O
	ttt->mark_board(2); //X
	ttt->mark_board(5); //O
	ttt->mark_board(3); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();

	ttt->start_game("X");

	ttt->mark_board(4); //X
	ttt->mark_board(1); //O
	ttt->mark_board(5); //X
	ttt->mark_board(3); //O
	ttt->mark_board(6); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();

	ttt->start_game("X");

	ttt->mark_board(7); //X
	ttt->mark_board(1); //O
	ttt->mark_board(8); //X
	ttt->mark_board(4); //O
	ttt->mark_board(9); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();

	ttt->start_game("X");

	ttt->mark_board(1); //X
	ttt->mark_board(3); //O
	ttt->mark_board(5); //X
	ttt->mark_board(4); //O
	ttt->mark_board(9); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe3>();

	ttt->start_game("X");

	ttt->mark_board(3); //X
	ttt->mark_board(1); //O
	ttt->mark_board(5); //X
	ttt->mark_board(4); //O
	ttt->mark_board(7); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test TicTacToeManager get winner total function")
{
	TicTacToeManager tm;
	
	std::unique_ptr<TicTacToe> ttt1 = std::make_unique<TicTacToe3>();

	ttt1->start_game("X");
	ttt1->mark_board(1);
	ttt1->mark_board(2);
	ttt1->mark_board(4);
	ttt1->mark_board(5);
	ttt1->mark_board(7); //X wins

	REQUIRE(ttt1->game_over());

	tm.save_game(std::move(ttt1));

	std::unique_ptr<TicTacToe> ttt2 = std::make_unique<TicTacToe3>();
	
	ttt2->start_game("O");
	ttt2->mark_board(1);
	ttt2->mark_board(2);
	ttt2->mark_board(4);
	ttt2->mark_board(5);
	ttt2->mark_board(7); //O wins

	REQUIRE(ttt2->game_over());

	tm.save_game(std::move(ttt2));

	std::unique_ptr<TicTacToe> ttt3 = std::make_unique<TicTacToe3>();

	ttt3->start_game("X");

	ttt3->mark_board(1); //X
	ttt3->mark_board(2); //O
	ttt3->mark_board(3); //X
	ttt3->mark_board(5); //O
	ttt3->mark_board(4); //X
	ttt3->mark_board(7); //O
	ttt3->mark_board(6); //X
	ttt3->mark_board(9); //O
	ttt3->mark_board(8); //X
	//Tied game

	REQUIRE(ttt3->game_over());

	tm.save_game(std::move(ttt3));

	int x;
	int o;
	int t;

	tm.get_winner_total(x, o, t);

	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
}




TEST_CASE("Test first player set to X - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();
	ttt->start_game("X");

	REQUIRE(ttt->get_player() == "X");
}

TEST_CASE("Test first player set to O - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();
	ttt->start_game("O");

	REQUIRE(ttt->get_player() == "O");
}

TEST_CASE("Test game over if 16 slots are selected - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(1); //X
	ttt->mark_board(11); //O
	ttt->mark_board(6); //X
	ttt->mark_board(16); //O
	ttt->mark_board(4); //X
	ttt->mark_board(13); //O
	ttt->mark_board(7); //X
	ttt->mark_board(10); //O
	ttt->mark_board(9); //X
	ttt->mark_board(5); //O
	ttt->mark_board(14); //X
	ttt->mark_board(2); //O
	ttt->mark_board(15); //X
	ttt->mark_board(3); //O
	ttt->mark_board(12); //X
	ttt->mark_board(8); //O

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "C");
}

TEST_CASE("Test win by first column - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(1); //X
	ttt->mark_board(2); //O
	ttt->mark_board(5); //X
	ttt->mark_board(6); //O
	ttt->mark_board(9); //X
	ttt->mark_board(10); //O
	ttt->mark_board(13); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by second column - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");
	ttt->mark_board(2); //X
	ttt->mark_board(1); //O
	ttt->mark_board(6); //X
	ttt->mark_board(5); //O
	ttt->mark_board(10); //X
	ttt->mark_board(9); //O
	ttt->mark_board(14); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by third column - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(3); //X
	ttt->mark_board(1); //O
	ttt->mark_board(7); //X
	ttt->mark_board(4); //O
	ttt->mark_board(11); //X
	ttt->mark_board(14); //O
	ttt->mark_board(15); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by fourth column - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(4); //X
	ttt->mark_board(1); //O
	ttt->mark_board(8); //X
	ttt->mark_board(2); //O
	ttt->mark_board(12); //X
	ttt->mark_board(14); //O
	ttt->mark_board(16); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by first row - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(1); //X
	ttt->mark_board(5); //O
	ttt->mark_board(2); //X
	ttt->mark_board(4); //O
	ttt->mark_board(3); //X
	ttt->mark_board(14); //O
	ttt->mark_board(4); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by second row - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(5); //X
	ttt->mark_board(1); //O
	ttt->mark_board(6); //X
	ttt->mark_board(2); //O
	ttt->mark_board(7); //X
	ttt->mark_board(3); //O
	ttt->mark_board(8); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by third row - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(9); //X
	ttt->mark_board(1); //O
	ttt->mark_board(10); //X
	ttt->mark_board(2); //O
	ttt->mark_board(11); //X
	ttt->mark_board(3); //O
	ttt->mark_board(12); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win by fourth row - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(13); //X
	ttt->mark_board(1); //O
	ttt->mark_board(14); //X
	ttt->mark_board(2); //O
	ttt->mark_board(15); //X
	ttt->mark_board(3); //O
	ttt->mark_board(16); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(1); //X
	ttt->mark_board(2); //O
	ttt->mark_board(6); //X
	ttt->mark_board(4); //O
	ttt->mark_board(11); //X
	ttt->mark_board(3); //O
	ttt->mark_board(16); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left - 4x4")
{
	std::unique_ptr<TicTacToe> ttt = std::make_unique<TicTacToe4>();

	ttt->start_game("X");

	ttt->mark_board(4); //X
	ttt->mark_board(2); //O
	ttt->mark_board(7); //X
	ttt->mark_board(5); //O
	ttt->mark_board(10); //X
	ttt->mark_board(3); //O
	ttt->mark_board(13); //X

	REQUIRE(ttt->game_over() == true);
	REQUIRE(ttt->get_winner() == "X");
}

TEST_CASE("Test TicTacToeManager get winner total function - 4x4")
{
	TicTacToeManager tm;
	
	std::unique_ptr<TicTacToe> ttt1 = std::make_unique<TicTacToe4>();

	ttt1->start_game("X");
	ttt1->mark_board(1); //X
	ttt1->mark_board(2); //O
	ttt1->mark_board(5); //X
	ttt1->mark_board(6); //O
	ttt1->mark_board(9); //X
	ttt1->mark_board(10); //O
	ttt1->mark_board(13); //X

	REQUIRE(ttt1->game_over());

	tm.save_game(std::move(ttt1));

	std::unique_ptr<TicTacToe> ttt2 = std::make_unique<TicTacToe4>();
	
	ttt2->start_game("O");
	ttt2->mark_board(1); //O
	ttt2->mark_board(2); //X
	ttt2->mark_board(5); //O
	ttt2->mark_board(6); //X
	ttt2->mark_board(9); //O
	ttt2->mark_board(10); //X
	ttt2->mark_board(13); //O

	REQUIRE(ttt2->game_over());

	tm.save_game(std::move(ttt2));

	std::unique_ptr<TicTacToe> ttt3 = std::make_unique<TicTacToe4>();

	ttt3->start_game("X");

	ttt3->mark_board(1); //X
	ttt3->mark_board(11); //O
	ttt3->mark_board(6); //X
	ttt3->mark_board(16); //O
	ttt3->mark_board(4); //X
	ttt3->mark_board(13); //O
	ttt3->mark_board(7); //X
	ttt3->mark_board(10); //O
	ttt3->mark_board(9); //X
	ttt3->mark_board(5); //O
	ttt3->mark_board(14); //X
	ttt3->mark_board(2); //O
	ttt3->mark_board(15); //X
	ttt3->mark_board(3); //O
	ttt3->mark_board(12); //X
	ttt3->mark_board(8); //O
	//Tied game

	REQUIRE(ttt3->game_over());

	tm.save_game(std::move(ttt3));

	int x;
	int o;
	int t;

	tm.get_winner_total(x, o, t);

	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
}

