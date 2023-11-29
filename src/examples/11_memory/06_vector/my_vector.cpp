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

/*
    1) Copy size from v1 to v2
    2) Copy capacity from v1 to v2
    3) Create new memory for v2
    4) Copy values from v1 to v2
*/

Vector::Vector(const Vector& v1)
: size{v1.size}, capacity{v1.capacity}, elements{new int[v1.size]}
{
    std::cout<<"Copy constructor - created memory at "<<elements<<"\n";
    for(auto i=0; i<v1.size; i++)
    {
        elements[i] = v1.elements[i];
    }
}

Vector& Vector::operator=(const Vector& v1)

{
    int* temp = new int[v1.size];

    for(auto i=0; i<v1.size; i++)
    {
        temp[i] = v1.elements[i];
    }

    std::cout<<"Copy assignment delete memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    temp = nullptr;

    std::cout<<"Copy assignment create memory at "<<elements<<"\n";
    size = v1.size;

    return *this;
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