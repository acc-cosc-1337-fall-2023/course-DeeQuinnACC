//atm.h
#include "bank_account.h"
#include "customer.h"
#include <vector>
#include <memory>
#include <stdlib.h>

class ATM
{
public:
    //ATM(std::vector<Customer*> c) : customers(c){ scan_card(); }

    void display_balance();
    void make_deposit();
    void make_withdrawal();
    void scan_card();

private:
    std::vector<Customer*> customers;
    std::unique_ptr<BankAccount>& account;
    int customer_index;
    int account_index;
};

void display_menu();
void run_menu(ATM& atm);
void handle_menu_option(int option, ATM& atm);