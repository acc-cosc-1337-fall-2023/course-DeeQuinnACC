//bank_account.cpp
#include "bank_account.h"

using std::cout;

int BankAccount::get_balance() const
{
    return balance;
}

void BankAccount::deposit(int amount) //:: = scope. modifiying the function deposit inside of BankAccount
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

void BankAccount::get_balance_from_db()
{
    balance = rand() % 10000 + 1;
}

//friend class: can access private data from BankAccount
void show_balance(const BankAccount& account)
{
    cout<<account.balance;
}