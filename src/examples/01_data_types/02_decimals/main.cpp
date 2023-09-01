#include<iostream>
#include "decimals.h"

using std::cout;
using std::cin;

int main()
{
    double value; //Create variable
    cout<<"Enter a value: ";
    cin>>value;

    double result = add_to_double_1(value);

    cout<<"\nResult: "<<result<<"\n";

    return 0;
}