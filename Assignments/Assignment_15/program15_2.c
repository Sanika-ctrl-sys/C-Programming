// write a program which accept one number from user and chcek whether that number is greater that 100 or not
/*
Input  :101
Output :Greater

Input  :39
OutPut :Smaller
*/

#include <stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    bRet = chkGreater(iValue) ;

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}