#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num1 = 5;
	int* num_ptr = &num1; //* = Pointer
	//Must pass in an address, unlike references

	cout<<"\nNum1 address is: "<<&num1;
	cout<<"\nAddress num_ptr is pointed to: "<<num_ptr;
	cout<<"\nValue of num1: "<<num1;
	cout<<"\nValue of num_ptr: "<<*num_ptr; 
	// * tells the pointer to grab the value	
	cout<<"\nAddress where the pointer is: "<<&num_ptr;

	*num_ptr = 10; //Edits value of num1

	cout<<"\nValue of num1: "<<num1;

	int num2 = 20;
	num_ptr = &num2;

	cout<<"\nAddress of num2: "<<&num2;
	cout<<"\nNew address pointed at by num_ptr: "<<num_ptr;
	cout<<"\nValue of num2: "<<num2;
	cout<<"\nValue of num_ptr: "<<*num_ptr;

	cout<<"\n";
	return 0;
}