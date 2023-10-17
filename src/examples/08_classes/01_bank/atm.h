//atm.h
#include "bank_account.h"

class ATM
{
public:
    ATM(BankAccount& a) : account(a){}
    void display_balance();
    void make_deposit();
    void make_withdrawal();

    BankAccount& get_account(){return account;}
private:
    BankAccount& account;

};

//Free functions
void display_menu();
void run_menu(ATM& atm);
void handle_menu_option(int option, ATM& atm);