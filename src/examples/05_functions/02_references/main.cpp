#include<iostream>

using std::cout;

int main()
{
    //num_ref is a reference to num
    int num = 5;
    int& num_ref = num;

    //It is at the same location
    cout<<num_ref<<" is at "<<&num_ref;
    cout<<"\nCompare "<<&num;

    //It will update num all the same
    num_ref = 10;

    cout<<"\n"<<num_ref<<", "<<num;

    return 0;
}