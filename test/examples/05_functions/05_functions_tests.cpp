#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "static.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test ref_param")
{
	int num = 10;
	
	ref_param(num);

	REQUIRE(num == 20);
}

TEST_CASE("Test non_static_var", "Value of num doesn't persist")
{
	REQUIRE(non_static_var() == 6);
	REQUIRE(non_static_var() == 6);
}

TEST_CASE("Test static_var", "Value should persist")
{
	REQUIRE(static_var() == 6);
	REQUIRE(static_var() == 7);
	REQUIRE(static_var() == 8);

	static_var();
	REQUIRE(static_var() == 10);
}