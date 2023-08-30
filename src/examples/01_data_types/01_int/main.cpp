#include "int.h"
#include <iostream>

using std::cout;

int main()
{
    int num = 5;
    int result = echo_variable(num);

    cout<<"Result: "<<result<<"\n";
    cout<<"Num: "<<num<<"\n";
    
    return 0;
}