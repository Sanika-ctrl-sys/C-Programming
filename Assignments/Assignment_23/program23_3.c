/*
Write a program which accept string from user and toggle the case
Input   : "Marvellous Multi OS "
Output  : mARVELLOUS mULTI os
*/

#include <stdio.h>

void strtogglex(char * str)
{
    int i;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(i == 0 || str[i-1] == ' ')
        {
            if(str[i] >= 'A' && str[i] <= 'Z' )
            {
                str[i] = str[i] + 32;
            }
        }
        else
        {
            if(str[i] >= 'a' && str[i] <='z')
            {
                str[i] = str[i] - 32;
            }
        }
    }

}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']",arr);

    strtogglex(arr);

    printf("Modified string is : %s",arr);

    return 0;
}