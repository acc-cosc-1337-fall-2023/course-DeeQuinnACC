#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"
#include "decimals.h"
#include "char.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("Test echo_variable Function", "functon should return the same value that was passed in") 
{
	REQUIRE(5 == echo_variable(5));
	REQUIRE(10 == echo_variable(10));
	REQUIRE(100 == echo_variable(100));
}
/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Test add_to_double_1 Function", "function should return the value passed in plus 0.9")
{
	//REQUIRE(0.9 == add_to_double_1(0.0));
}
/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/
TEST_CASE("Test add_to_double_2 Function", "function should return the value passed in plus 1.5")
{
	REQUIRE(1.5 == add_to_double_2(0.0));
}
/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
TEST_CASE("Test get_char_ascii_value", "function should return the ascii value of the character inputed")
{
	REQUIRE(65 == get_char_ascii_value('A'));
	REQUIRE(68 == get_char_ascii_value('D'));
	REQUIRE(32 == get_char_ascii_value(' '));
}
/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

