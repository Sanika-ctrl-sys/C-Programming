// Accept a signal character and determine whether it is an uppercase alphabet , lowercase alphabet ,digit or special character . Use charecter comparisons without using library character- classification functions

#include <stdio.h>
#include <stdlib.h>

void CheckCharecterType(char cValue)
{
    if((cValue >= 'A')&&(cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if((cValue >= 'a')&&(cValue <= 'z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if((cValue >= '0')&&(cValue <= '9'))
    {
        printf("Digit\n");
    }
    else 
    {
        printf("Special Charecter\n");
    }
}
int main()
{
    char cValue ='\0';

    printf("Enter a charecter :");
    scanf("%c",&cValue);

    CheckCharecterType(cValue);

    return EXIT_SUCCESS;
}
