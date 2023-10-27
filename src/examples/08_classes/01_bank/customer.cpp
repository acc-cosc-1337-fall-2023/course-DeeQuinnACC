//customer.cpp
#include "customer.h"

Customer::Customer()
{
    accounts.push_back(&CheckingAccount());
    accounts.push_back(&SavingsAccount());
}