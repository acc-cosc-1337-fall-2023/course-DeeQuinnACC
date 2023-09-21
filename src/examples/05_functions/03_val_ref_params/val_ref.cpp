#include "val_ref.h"

void ref_param(int &num)
{
    num = 20;
}

void const_ref_param(const int &num)
{
    //This next line won't compile
    //num = 20;
}