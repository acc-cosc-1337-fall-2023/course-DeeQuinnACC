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


//References are best used for lists and large amounts of data
//Since otherwise it would copy large amoutns of data every
//time you call the function