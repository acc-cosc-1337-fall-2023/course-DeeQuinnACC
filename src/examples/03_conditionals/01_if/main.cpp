#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	double hours;
	cout<<"Enter hours: ";
	cin>>hours;

	if(overtime(hours))
	{
		cout<<"\n"<<hours<<" is overtime.\n";
	}
	else
	{
		cout<<"\n"<<hours<<" is not overtime.\n";
	}


	return 0;
}
