#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "create_str.h"
#include "function_str.h"
#include "for_ranged_str.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test string_val_param")
{
	string str = "Python";
	string_val_param(str);

	REQUIRE(str == "Python");
}

TEST_CASE("test string_ref_param")
{
	string str = "Python";
	string_ref_param(str);

	REQUIRE(str == "C++");
}
