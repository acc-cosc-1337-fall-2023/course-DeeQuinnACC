#include<iostream>
#include "switch.h"

using std::cout;
using std::cin;

int main() 
{
	int option = -1;
	cout<<"Enter a number: ";
	cin>>option;

	auto choice = menu(option);

	cout<<"You choose "<<choice<<".\n";

	return 0;
}