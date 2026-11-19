/*
Write a program which accept string from user and count number of white spaces
Input   : "Marvellous"
Output  : 0

Input   : "Marvellous Infosystem"
Output  : 1

Input   : "Marvellous Infosystem by Piyush Manohar Khairnar"
Output  : 5
*/

#include <stdio.h>

int WhiteSpace(char * str)
{
    int i , count = 0 ;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' )
        {
            count++;
        }
       
    }
    return count;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']",arr);

    iRet = WhiteSpace(arr);

    printf("%d",iRet);

    return 0;
}