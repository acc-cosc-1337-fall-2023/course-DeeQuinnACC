#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    string lang = "abcdefghijklmno";

    cout<<lang.capacity()<<"\n";
    cout<<&lang<<"\n";
    for(int i = 0; i < lang.size(); i++)
    {
        cout<<static_cast<void*>(&lang[i])<<"\n";
    }

    lang.append("p");

    cout<<"\n"<<&lang<<"\n";
    for(int i = 0; i < lang.size(); i++)
    {
        cout<<static_cast<void*>(&lang[i])<<"\n";
    }

    //Multiple ways to create strings
    /*
    string s0 = "just create it lol";
    
    string s1 = "initial string";
    string s2(s1, 8, 3); //"str"
    //With (x, y, z), uses string x, starts at index y, and goes z more characters

    string s3 = ()"another character sequence", 12);
    //Stops at index 12

    string s4(10, 'x')
    //String of 10 'x's

    string s5(10, 42)
    //String of 10 characters of ASCII value 42 (which is '*')
    
    */

    return 0;
}