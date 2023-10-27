//customer.cpp
#include "customer.h"

Customer::Customer()
{
    CheckingAccount checkingAccount;
    SavingsAccount savingsAccount;
    accounts.push_back(&checkingAccount);
    accounts.push_back(&savingsAccount);
}