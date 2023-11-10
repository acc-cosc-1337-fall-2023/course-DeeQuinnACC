//atm.h
#include "bank_account.h"
#include "customer.h"
#include <vector>
#include <memory>
#include <stdlib.h>

class ATM
{
public:
    ATM(BankAccount* b) : account(b){}

    void display_balance();
    void make_deposit();
    void make_withdrawal();

private:
    BankAccount* account;
};

int scan_card(int max_value);
void display_menu();
void run_menu();
void handle_menu_option(int option, ATM& atm);