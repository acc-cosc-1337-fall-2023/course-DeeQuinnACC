#include <vector>
#include <iostream>

using std::vector;
using std::cout;

void numFunc(vector<int> nums)
{
    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size:"<<nums.size()<<"\n";
    for(int num: nums)
    {
        cout<<num<<"\n";
    }
}

int main()
{
    vector<int> nums{7, 4, 20};

    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size:"<<nums.size()<<"\n";
    for(int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<"\n";
    }

    cout<<"\n";

    nums.push_back(3); //Add to the end of the list

    numFunc(nums);

    nums.push_back(5);
    nums.push_back(10);

    numFunc(nums);

    return 0;
}