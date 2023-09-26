#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "static.h"
#include "default.h"

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

TEST_CASE("Test get_total")
{
	REQUIRE(get_total(50) == get_total(50, 1));
	REQUIRE(get_total(50, 2) == 100);
}