//customer.h
#include "checking_account.h"
#include "savings_account.h"
#include <vector>
#include <memory>

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:
    Customer(int id, std::string name);
    std::unique_ptr<BankAccount>& get_account(int index){ return accounts[index]; }

private:
    std::vector<std::unique_ptr<BankAccount>> accounts;
    int customer_id;
    std::string name;
};

#endif