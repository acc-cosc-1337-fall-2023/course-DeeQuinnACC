//atm.cpp
#include "atm.h"

using std::cout;
using std::cin;
using std::unique_ptr;
using std::make_unique;

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

//Free function

int scan_card(int max_value)
{
    return rand() % max_value;
}

std::vector<Customer> get_customers()
{
	std::vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
	customers.push_back(Customer(2, "Mary Jane"));
	customers.push_back(Customer(3, "Brian F"));
	customers.push_back(Customer(4, "Gerald Riv"));
	customers.push_back(Customer(5, "Joe Mama"));

    return customers;
}

void display_menu()
{
    cout<<"\n1 - Deposit";
    cout<<"\n2 - Withdraw";
    cout<<"\n3 - Display Balance";
    cout<<"\n4 - Scan Card";
    cout<<"\n5 - Exit";
}

void run_menu()
{
    int option = 0;
    auto input = ' ';

    do
    {
        cout<<"Enter to scan card: ";
        cin>>input;
        auto customers = get_customers();
        int customer_index = scan_card(customers.size());
        Customer& customer = get_customers()[customer_index];

        int account_index = 0;
        cout<<"Enter 1 for Checking, 2 for Savings: ";
        cin>>account_index;

        unique_ptr<BankAccount>& account = customer.get_account(account_index - 1);

        ATM atm(account.get());
        do
        {
            display_menu();

            cout<<"\nEnter menu option: ";
            cin>>option;
            handle_menu_option(option, atm);
        } while(option != 4);
    } while (true);
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
            //atm.scan_card();
            break;
        case 5:
            cout<<"\nExiting...";
            break;
        default:
            cout<<"\nInvalid option, please try again.";
            break;
    }
}