#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else_if.h"
#include "switch.h"

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

TEST_CASE("Verify menu function")
{
	//REQUIRE(menu(1) == "Option 1");
	//REQUIRE(menu(2) == "Option 2");
	//REQUIRE(menu(3) == "Option 3");
	//REQUIRE(menu(4) == "Option 4");
	//REQUIRE(menu(5) == "EXIT");
	//REQUIRE(menu(0) == "Invalid Option");
}