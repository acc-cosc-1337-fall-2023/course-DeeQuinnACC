#include "static.h"

int non_static_var()
{
    int num = 5;
    num++;
    return num;
}

static int static_var()
{
    static int num = 5;
    //This variable will persist across function calls
    //i.e: This function adds 1 to num every time it is called.
    num++;
    return num;
}