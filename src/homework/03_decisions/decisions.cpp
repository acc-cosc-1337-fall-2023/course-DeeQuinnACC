//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
char get_letter_grade_using_if(int grade)
{
    char letterGrade;

    if(grade >= 90)
    {
        letterGrade = 'A';
    }
    else if(grade >= 80)
    {
        letterGrade = 'B';
    }
    else if(grade >= 70)
    {
        letterGrade = 'C';
    }
    else if(grade >= 60)
    {
        letterGrade = 'D';
    }
    else
    {
        letterGrade = 'F';
    }

    return letterGrade;
}

char get_letter_grade_using_switch(int grade)
{
    char letterGrade;

    switch(grade)
    {
        case 0 ... 59:
            letterGrade = 'F';
            break;
        case 60 ... 69:
            letterGrade = 'D';
            break;
        case 70 ... 79:
            letterGrade = 'C';
            break;
        case 80 ... 89:
            letterGrade = 'B';
            break;
        case 90 ... 100:
            letterGrade = 'A';
            break;
        default:
            letterGrade = 'A';
            break;
    }
    return letterGrade;
}