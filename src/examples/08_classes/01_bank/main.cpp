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

	atm.display_balance();
	cout<<"\n";
	return 0;
}