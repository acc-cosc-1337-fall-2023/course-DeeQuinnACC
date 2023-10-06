//bank_account.cpp
#include "bank_account.h"

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