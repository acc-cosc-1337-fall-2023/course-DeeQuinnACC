//write include statements
#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{
	//Initialize variables
	int grade;
	int choice;
	char letterGrade;

	//Main menu
	cout<<"\tMain Menu\n";
	cout<<"1 - Letter grade using if\n";
	cout<<"2 - Letter grade using switch\n";
	cout<<"3 - Exit\n";

	//Get choice
	cout<<"\nPlease enter a number listed above: ";
	cin>>choice;
	//Check that the user didn't exit the program
	if(choice != 3)
	{
		//Check if the choice is valid
		if(choice < 1 || choice > 3)
		{
			cout<<"Invalid choice, please enter a choice listed above.\n";
			return 0;
		}

		//Get grade
		cout<<"\nPlease enter your grade: ";
		cin>>grade;

		//Check if grade is valid
		if(grade < 0 || grade > 100)
		{
			cout<<"The entered grade is invalid, please try again.\n";
			return 0;
		}

		//Get letter grade
		if(choice == 1)
		{
			letterGrade = get_letter_grade_using_if(grade);
		}
		else
		{
			letterGrade = get_letter_grade_using_switch(grade);
		}

		//Output grade
		cout<<"Your letter grade is "<<letterGrade<<".";
	}

	//Exit program
	cout<<"\nExiting program...\n";
	return 0;
}