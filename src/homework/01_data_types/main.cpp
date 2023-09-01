//write include statements
#include<iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
	int num;
	cout<<"Please enter a number: ";
	cin>>num;

	int result = multiply_numbers(num);
	cout<<"\nResult: "<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Result 2: "<<result<<"\n";

	return 0;
}
