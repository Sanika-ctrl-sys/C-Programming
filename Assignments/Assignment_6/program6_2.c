// A student is eligible for if the student marks are at least 60 ans age is at ;east 12 years Accept both value and determine eligibility . Negetive age or marks outside 0 - 100 must be treated as invalid input

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if(iAge < 0 || fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Input\n");
    }
    else if(fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
