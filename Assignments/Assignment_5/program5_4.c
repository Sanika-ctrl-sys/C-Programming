// Accept an integer and determine whether it is divisible by both 3 and 5 , only 3, only 5,or neither.

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(((iValue % 3)==0)&&((iValue % 5))==0)
    {
        printf("Divisible by both\n");
    }
    else if(((iValue % 3)==0))
    {
        printf("Divisible by 3\n");
    }
    else if(((iValue % 5)==0))
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
