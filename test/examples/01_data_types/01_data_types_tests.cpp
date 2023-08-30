#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("Test echo_variable Function", "functon should return the same value that was passed in") {
	REQUIRE(5 == echo_variable(5));
	REQUIRE(10 == echo_variable(10));
	REQUIRE(100 == echo_variable(100));
}
/*test case add_to_double_1 with 0 as parameter*/

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

