//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

void use_stack_array()
{
    const auto SIZE = 3;
    int nums[SIZE]{5, 7, 0};//Creates the array [5, 7, 0]

    for(int i=0; i<SIZE; i++)
    {
        std::cout<<nums[i]<<"\n";
    }
}

void use_parallel_arrays()
{
    const auto SIZE = 3;
    int month_numbers[SIZE]{1, 2, 3};
    std::string month_names[SIZE]{"Jan", "Feb", "Mar"};

    for(auto i=0; i<SIZE; i++)
    {
        std::cout<<month_numbers[i]<<" | "<<month_names[i]<<"\n";
    }
}

void arrays_and_pointers()
{
    const auto SIZE = 3;
    int nums[SIZE]{5, 7, 0};

    std::cout<<nums<<"\n";

    int* ptr = nums;
    std::cout<<ptr<<" "<<*ptr<<"\n";

    auto i_hate_yellow_lines = *ptr++;//Move forward 4 bytes

    std::cout<<ptr<<" "<<*ptr<<"\n";

    i_hate_yellow_lines = *ptr++;//Move forward 4 bytes

    std::cout<<ptr<<" "<<*ptr<<"\n";

    i_hate_yellow_lines = *ptr--;//Move back 4 bytes

    std::cout<<ptr<<" "<<*ptr<<"\n";
}

void display_array(int* nums)
{//Sentinel value = -1
    for(int i=0; nums[i] != -1; i++)
    {
        std::cout<<nums[i]<<" ";
    }

    std::cout<<"\n";
}

void display_array(int* nums, const int SIZE)
{
    for(int i=0; i<SIZE; i++)
    {
        std::cout<<nums[i]<<" ";
    }

    std::cout<<"\n";
}

void populate_time_time(int times_table[][COLS], const int ROWS)
{
    for(int i=0; i<ROWS; i++)
    {
        for(int o=0; o<COLS; o++)
        {
            times_table[i][o] = (i+1)*(o+1);
        }
    }
}

void display_time_table(int times_table[][COLS], const int ROWS)
{
    for(int i=0; i<ROWS; i++)
    {
        for(int o=0; o<COLS; o++)
        {
            std::cout<<std::setw(5)<<times_table[i][o];
        }
        std::cout<<"\n";
    }
}