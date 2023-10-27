#include <time.h> //help provide true randomness for rand()
#include <iostream>
#include <vector>
#include <list>
#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"


using std::cout;
using std::vector;
using std::list;

int main()
{
	srand(time(NULL)); //Make rand() truly sudo-random
	//BankAccount* account = nullptr;

	CheckingAccount checkingAccount(500);
	SavingsAccount savingsAccount(500);

	vector<BankAccount*> accounts;
	accounts.push_back(&checkingAccount);
	accounts.push_back(&savingsAccount);

	ATM atm(accounts);
	run_menu(atm);

	return 0;
	//cout<<"\n"<<account1.BankAccount::get_balance()<<" | "<<account1.get_balance()<<"\n";
}