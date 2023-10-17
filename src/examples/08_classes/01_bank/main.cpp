#include "atm.h"
#include<time.h> //help provide true randomness for rand()
#include<iostream>
#include "bank_account.h"

using std::cout;

int main()
{
	srand(time(NULL)); //Change seed number dependent on time

	BankAccount account;

	ATM atm(account);

	run_menu(atm);

	atm.display_balance();
	return 0;
}