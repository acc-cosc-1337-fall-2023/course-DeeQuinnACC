//atm.h
#include "bank_account.h"
#include <vector>
#include <stdlib.h>

class ATM
{
public:
    ATM(std::vector<BankAccount*> a) : accounts(a){ scan_card(); }

    void display_balance();
    void make_deposit();
    void make_withdrawal();
    void scan_card();

private:
    std::vector<BankAccount*> accounts;
    BankAccount* account;
    int account_index;
};

void display_menu();
void run_menu(ATM& atm);
void handle_menu_option(int option, ATM& atm);