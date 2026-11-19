/*
Accept Character from user and check whether it is special symbol or not ( ! , @ , # , $ , % , ^ , & , * )
Input  : %
Output : TRUE

Input  :d
Output :FALSE
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' ||
       ch == '$' || ch == '%' || ch == '^' ||
       ch == '&' || ch == '*')
    {
        return TRUE;
    }

    return FALSE;

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf(" %c",&cValue);

    bRet = chkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character");
    }
    else
    {
        printf("It is not a Special Character");
    }
    return 0;
}