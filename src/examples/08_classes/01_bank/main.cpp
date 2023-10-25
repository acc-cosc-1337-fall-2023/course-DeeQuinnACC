#include <time.h> //help provide true randomness for rand()
#include <iostream>
#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"


using std::cout;

int main()
{
	srand(time(NULL)); //Make rand() truly sudo-random

	BankAccount* account;

	SavingsAccount account1(500);
	account = &account1;
	cout<<account->get_balance()<<"\n";

	CheckingAccount account2(500);
	account = &account2;
	cout<<account->get_balance()<<"\n";


	//cout<<"\n"<<account1.BankAccount::get_balance()<<" | "<<account1.get_balance()<<"\n";
}