#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify operator_precedence_1")
{
	REQUIRE(operator_precedence_1(3,5,5) == 4);
	REQUIRE(operator_precedence_1(9,9,3) == 12);
}
