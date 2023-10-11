// bank_account.h
#include<iostream>
#include<stdlib.h> //for rand()

//class header guards
//Protects code from grabbing two references of the same class
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
//This function is not a part of BankAccount, but can access private data
friend void show_balance(const BankAccount& account);

public:
    BankAccount() { get_balance_from_db(); }
    BankAccount(int b) : balance(b){}
    
    int get_balance() const { return balance; }
    void deposit(int amount);
    void withdraw(int amount);

private:
    int balance{0}; //{0} initializes the value

    void get_balance_from_db();
};

#endif
