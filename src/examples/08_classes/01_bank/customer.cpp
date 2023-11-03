//customer.cpp
#include "customer.h"

Customer::Customer(int id, std::string n)
    :customer_id(id), name(n)
{
    accounts.push_back(std::make_unique<CheckingAccount>());
    accounts.push_back(std::make_unique<SavingsAccount>());
}