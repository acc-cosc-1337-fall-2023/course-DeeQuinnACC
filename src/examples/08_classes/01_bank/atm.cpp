//atm.cpp
#include "atm.h"

using std::cout;
using std::cin;

void ATM::display_balance()
{
    auto& customer = customers[customer_index];
    auto& account = customer->get_account(account_index);

    cout<<"\nATM Balance: "<<account->get_balance()<<"\n";
}

void ATM::make_deposit()
{
    auto& customer = customers[customer_index];
    auto& account = customer->get_account(account_index);

    int amount = 0;
    cout<<"\nEnter amount to deposit: ";
    cin>>amount;

    account->deposit(amount);
}

void ATM::make_withdrawal()
{
    auto& customer = customers[customer_index];
    auto& account = customer->get_account(account_index);

    int amount = 0;
    cout<<"\nEnter amount to withdraw: ";
    cin>>amount;

    account->withdraw(amount);
}

void ATM::scan_card()
{
    customer_index = rand() % customers.size();

    cout<<"Enter 1 for checking, 2 for savings: ";
    cin>>account_index;

    //account = &customers[customer_index].get_account(account_index);

    //account = customer.get_account(account_index - 1);
}

//Free Functions
void display_menu()
{
    cout<<"\n1 - Deposit";
    cout<<"\n2 - Withdraw";
    cout<<"\n3 - Display Balance";
    cout<<"\n4 - Scan Card";
    cout<<"\n5 - Exit";
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
    } while (option != 5);
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
            atm.scan_card();
            break;
        case 5:
            cout<<"\nExiting...";
            break;
        default:
            cout<<"\nInvalid option, please try again.";
            break;
    }
}