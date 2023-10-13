//atm.cpp
#include "atm.h"

using std::cout;
using std::cin;

void ATM::display_balance()
{
    cout<<"ATM Balance: "<<account.get_balance()<<"\n";
}

void ATM::make_deposit()
{
    int amount = 0;
    cout<<"Enter amount to deposit: ";
    cin>>amount;

    account.deposit(amount);
}

void ATM::make_withdrawal()
{
    int amount = 0;
    cout<<"Enter amount to withdraw: ";
    cin>>amount;

    account.withdraw(amount);
}