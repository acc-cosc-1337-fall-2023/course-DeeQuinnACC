#include "recursion.h"
#include<iostream>
//Write code for recursive display function
void say_hello(int times)
{
    if(times == 0)
    {
        std::cout<<"Base case\n";
        return;
    }

    std::cout<<"Hello\n";
    say_hello(times-1);
}

//Write code for recursive factorial
