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
    cout<<"\n";
}

int main()
{
    vector<int> nums{7, 4, 20};
    vector<int> nums1;
    vector<int> nums2(5, 10);//Fills the vector with five "10"s


    for(int num2 : nums2)
    {
        cout<<num2<<"\n";
    }

    vector<int> nums3 = nums;

    vector<double> doub = {5.5, 3.9, 8.9998};

    return 0;
}