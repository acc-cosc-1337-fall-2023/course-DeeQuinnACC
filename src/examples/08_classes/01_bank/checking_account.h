#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount: public BankAccount //Inherit from bank account
{
public:
    CheckingAccount() {}
    //This doesn't run
    //CheckingAccount(int b) : balance(b) {}
    CheckingAccount(int b) : BankAccount(b) {}

    int get_balance() const { return BankAccount::get_balance(); }

private:

};

#endif