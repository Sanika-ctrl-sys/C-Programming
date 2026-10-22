//Accept an integer from the user and determine whether it is even or odd . An even number is completely divisible by 2

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
