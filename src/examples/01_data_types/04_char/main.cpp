#include<iostream>
#include "char.h"

using std::cout;

int main()
{
    char letter = 'A';

    auto ascii_value = get_char_ascii_value(letter);

    cout<<"Ascii Value for "<<letter<<" is "<<ascii_value<<"\n";

    return 0;
}