/*
Write a program which accept string from user and convert it into lower case
Input   : "Marvellous Multi OS "
Output  : marvellous multi os
*/

#include <stdio.h>

void strlwrx(char * str)
{
    int i;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' )
        {
            str[i] = str[i] + 32;
        }
    }

}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is : %s",arr);

    return 0;
}