#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "create_str.h"
#include "function_str.h"
#include "for_ranged_str.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
