//write include statements
#include <iostream>
#include "hwexpressions.h"
//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
	//Variable declarations
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	//Get meal amount and tip rate
	cout<<"\nPlease enter the meal amount: ";
	cin>>meal_amount;

	cout<<"\nPlease enter tip rate (in decimal form): ";
	cin>>tip_rate;

	//Find tax amount and tip amount
	tax_amount = get_sales_tax_amount(meal_amount);
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	//Get total
	total = meal_amount + tax_amount + tip_amount;

	//Formats all amounts to two decimal places
	meal_amount = (int)(meal_amount * 100);
	meal_amount = meal_amount / 100;

	tax_amount = (int)(tax_amount * 100);
	tax_amount = tax_amount / 100;

	tip_amount = (int)(tip_amount * 100);
	tip_amount = tip_amount / 100;

	total = (int)(total * 100);
	total = total / 100;

	//Print out reciept
	cout<<"\n\nMeal amount: $"<<meal_amount
		<<"\nSales Tax: $"<<tax_amount
		<<"\nTip amount: $"<<tip_amount
		<<"\nTotal: $"<<total<<"\n";

	return 0;
}
