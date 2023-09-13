//write include statements
#include "if_else_if.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;
/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{
	int year;

	cout<<"Please enter your birth year: ";
	cin>>year;

	auto generation = get_generation(year);

	cout<<"\nYour generation is "<<generation<<"\n";
	
	return 0;
}