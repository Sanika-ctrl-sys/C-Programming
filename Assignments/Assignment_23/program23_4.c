/*
Write a program which accept string from user and display only digits from that string
Input   : "marve89llous121 "
Output  : 89121

Input   : "Demo"
Output  :
*/

#include <stdio.h>

void DisplayDigit(char * str)
{
    int i;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c",str[i]);
        }
    }
}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']",arr);

    DisplayDigit(arr);

    return 0;
}