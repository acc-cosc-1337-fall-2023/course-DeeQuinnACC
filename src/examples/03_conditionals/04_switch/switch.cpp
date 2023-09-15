//write include statement for switch header
#include "switch.h"
#include <iostream>

using std::cout;
using std::cin;
//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise
std::string menu()
{
    display_menu();
    handle_menu_input;
    return 0;
}

void display_menu()
{
    cout<<"1 - Option 1";
    cout<<"2 - Option 2";
    cout<<"3 - Option 3";
    cout<<"4 - Option 4";
    cout<<"5 - Exit";
}

void handle_menu_input(int input)
{
    int num;

	cout<<"Enter a number: ";
	cin>>num;
    
    switch(num)
    {
        case 1:
            cout<<"Option 1";
            break;
        case 2:
            cout<<"Option 2";
            break;
        case 3:
            cout<<"Option 3";
            break;
        case 4:
            cout<<"Option 4";
            break;
        case 5:
            //Exit the program by displaying nothing
            break;
        default:
            cout<<"Invalid Option";
            break;
    }
}