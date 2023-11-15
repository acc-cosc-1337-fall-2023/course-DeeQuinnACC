#include "text_output.h"

using std::cout;
using std::ofstream; //out file stream
using std::cin;
using std::ifstream; //in file stream
using std::string;
using std::getline;

void output_data_to_file()
{
    //open file
    ofstream my_file;
    my_file.open("example.dat");

    //Output to file
    my_file<<"Write to file 1\n";
    my_file<<"Write to file 2\n";
    my_file<<"Write to file 3\n";

    //Close file
    my_file.close();
}

void input_data_to_file()
{
    string line;
    ifstream my_file;
    my_file.open("example.dat");

    if(my_file.is_open())
    {
        cout<<"File output:\n";
        while(getline(my_file, line))
        {
            cout<<line<<"\n";
        }
    }
    else
    {
        cout<<"ERROR: Cannot open file\n";
    }

    my_file.close();
}