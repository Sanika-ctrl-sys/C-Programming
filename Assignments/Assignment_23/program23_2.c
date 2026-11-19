/*
Write a program which accept string from user and convert it into upper case
Input   : "Marvellous Multi OS "
Output  : MARVELLOUS MULTI OS
*/

#include <stdio.h>

void struprx(char * str)
{
    int i;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' )
        {
            str[i] = str[i] - 32;
        }
    }

}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is : %s",arr);

    return 0;
}