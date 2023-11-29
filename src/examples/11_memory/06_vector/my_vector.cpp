#include "my_vector.h"

//

Vector::Vector(int size)
 : size{0}, capacity{size}, elements{new int[size]}
{
    std::cout<<"Contrustor-New memory created at "<<elements<<".\n";
}

Vector::~Vector()
{
    std::cout<<"Delete memory at "<<elements<<"\n";
    delete[] elements;
}

void use_vector()
{
    //Not recommended; you should use a stack variable...
    //Vector* v = new Vector(3);

    //Creating stack variable
    Vector v{3};
    std::cout<<"Exiting use_vector...\n";

    //...or you will have to delete manually
    //delete v;
}