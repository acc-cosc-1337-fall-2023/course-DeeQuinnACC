//atm.cpp
#include "atm.h"

using std::cout;
using std::cin;

void ATM::display_balance()
{
    cout<<"\nATM Balance: "<<account->get_balance()<<"\n";
}

void ATM::make_deposit()
{
    int amount = 0;
    cout<<"\nEnter amount to deposit: ";
    cin>>amount;

    account->deposit(amount);
}

void ATM::make_withdrawal()
{
    int amount = 0;
    cout<<"\nEnter amount to withdraw: ";
    cin>>amount;

    account->withdraw(amount);
}

void ATM::scan_card()
{
    account_index = rand() % accounts.size();
    account = accounts[account_index];
}

//Free Functions
void display_menu()
{
    cout<<"\n1 - Deposit";
    cout<<"\n2 - Withdraw";
    cout<<"\n3 - Display Balance";
    cout<<"\n4 - Exit";
}

void run_menu(ATM& atm)
{
    int option = 0;

    do
    {
        display_menu();

        cout<<"\nEnter menu option: ";
        cin>>option;
        handle_menu_option(option, atm);
    } while (option != 4);
    
}



void handle_menu_option(int option, ATM& atm)
{
    switch(option)
    {
        case 1:
            atm.make_deposit();
            break;
        case 2:
            atm.make_withdrawal();
            break;
        case 3:
            atm.display_balance();
            break;
        case 4:
            cout<<"\nExiting...";
            break;
        default:
            cout<<"\nInvalid option, please try again.";
            break;
    }
}