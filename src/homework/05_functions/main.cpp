#include <iostream>
#include "func.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	char option = 0;
	string dnaSequence = "XXXXXXXXXX";

	do
	{
		//Display menu
		cout<<"\n   Main Menu\n";
		cout<<"1: Get GC Content\n";
		cout<<"2: Get DNA Sequence\n";
		cout<<"3: Exit Program\n";

		cout<<"\nPlease select an option by entering the number to the left of it: ";
		cin>>option;

		if(option == '1') //GC Content
		{
			cout<<"\nPlease enter the DNA sequence: ";
			cin>>dnaSequence;

			double gcContent = get_gc_content(dnaSequence);
			cout<<"The GC Content of this DNA sequence is "<<gcContent<<".\n";
		}
		else if(option == '2')//DNA Complement
		{
			cout<<"\nPlease enter the DNA sequence: ";
			cin>>dnaSequence;

			string complement = get_dna_complement(dnaSequence);
			cout<<"The DNA complement to the inputed DNA sequence is:\n";
			cout<<complement<<"\n";
		}
		else if(option == '3') //Display exit message
		{
			cout<<"\nExiting program...\n";
		}
		else //User inputted something unexpected, give error message
		{
			cout<<"\nERROR: Invalid selection. Please enter a valid option.\n";
		}
	} while (option != '3');

	return 0;
}
