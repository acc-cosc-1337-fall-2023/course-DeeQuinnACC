#include "bank_account.h"
#include<time.h> //help provide true randomness for rand()
#include<iostream>

using std::cout;

int main()
{
	srand(time(NULL)); //Change seed number dependent on time
	
	BankAccount account(5000);
	BankAccount account1;

	cout<<"\nBalance 1: "<<account.get_balance();
	cout<<"\nBalance 2: "<<account1.get_balance()<<"\n";
	return 0;
}