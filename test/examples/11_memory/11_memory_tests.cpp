#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test references vs pointers")
{
	int num1 = 5;
	int num2 = 1;

	ref_pointer(num1, &num2);

	REQUIRE(num1 == 20);
	REQUIRE(num2 == 30);
}

TEST_CASE("Test my_vector creation from existing Vector")
{
	Vector v1{3};
	Vector v2 = v1;
}

TEST_CASE("Test my_vector creation overwrite existing Vector")
{
	Vector v1{3};
	Vector v2{3};

	v2 = v1;
}