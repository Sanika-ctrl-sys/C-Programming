/* Write aprogram which accept string from user and accept one character . check whrther that character is present in string or not
Input   : "Marvellous Multi OS"
           e
Output  : True

Input   : "Marvellous Multi OS"
           w
Output  : False
*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkchar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;

}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%[^'\n']",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    bRet = chkchar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;

}