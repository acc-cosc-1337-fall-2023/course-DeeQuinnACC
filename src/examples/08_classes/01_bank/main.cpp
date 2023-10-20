#include "atm.h"
#include<time.h> //help provide true randomness for rand()
#include<iostream>
#include "bank_account.h"
#include "savings_account.h"
#include "checking_account.h"

using std::cout;

int main()
{
	srand(time(NULL)); //Make rand() truly sudo-random

	BankAccount account;
	SavingsAccount account1 (account.get_balance());

	cout<<"\n"<<account1.BankAccount::get_balance()<<" | "<<account1.get_balance()<<"\n";
}