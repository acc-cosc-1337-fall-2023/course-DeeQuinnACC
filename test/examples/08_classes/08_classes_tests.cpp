#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount constructor and get_balance")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test BankAccount deposit function")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(50);
	REQUIRE(account.get_balance() == 550);

	account.deposit(-100);
	REQUIRE(account.get_balance() == 550);
}

TEST_CASE("Test BankAccount withdraw function")
{
	BankAccount account(250);
	REQUIRE(account.get_balance() == 250);

	account.withdraw(150);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(101);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test BankAccount deposit and withdraw together")
{
	BankAccount account(1000);
	REQUIRE(account.get_balance() == 1000);

	account.deposit(100);
	REQUIRE(account.get_balance() == 1100);

	account.withdraw(200);
	REQUIRE(account.get_balance() == 900);
}