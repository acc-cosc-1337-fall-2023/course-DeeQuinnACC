#include <time.h> //help provide true randomness for rand()
#include <iostream>
#include <vector>
#include <list>
#include <memory>
#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include "customer.h"


using std::cout;
using std::vector;
using std::list;
using std::unique_ptr;
using std::make_unique;

int main()
{
	srand(time(NULL)); //Make rand() truly sudo-random

	vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
	customers.push_back(Customer(2, "Mary Jane"));
	customers.push_back(Customer(3, "Brian F"));
	customers.push_back(Customer(4, "Gerald Riv"));
	customers.push_back(Customer(5, "Joe Mama"));
}