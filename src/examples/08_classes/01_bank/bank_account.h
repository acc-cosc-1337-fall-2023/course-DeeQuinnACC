// bank_account.h
#include<stdlib.h> //for rand()

class BankAccount
{
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
