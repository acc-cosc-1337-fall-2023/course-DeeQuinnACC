#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include "if.h"
#include "if_else_if.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify overtime Function")
{
	REQUIRE(overtime(41));
	REQUIRE(!overtime(39));
}

TEST_CASE("Verify get_generation function")
{
	REQUIRE(get_generation(2000) == "Centenial");
	REQUIRE(get_generation(1980) == "Millenial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1960) == "Baby Boomer");
	REQUIRE(get_generation(1940) == "Silent Generation");
	REQUIRE(get_generation(1111) == "Invalid Year");
}