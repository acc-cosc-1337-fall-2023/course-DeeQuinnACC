#include "atm.h"
#include<time.h> //help provide true randomness for rand()
#include<iostream>
#include "bank_account.h"
#include "checking_account.h"

using std::cout;

int main()
{
	srand(time(NULL)); //Change seed number dependent on time (makes it more random)

	CheckingAccount cAccount;

	cout<<cAccount.get_balance();

/*
	BankAccount bAccount;

	ATM atm(bAccount);

	run_menu(atm);

	atm.display_balance();
	return 0;
*/
}