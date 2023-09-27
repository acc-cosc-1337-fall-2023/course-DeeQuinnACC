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

    return 0;
}