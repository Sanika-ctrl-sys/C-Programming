// write a program which accept one number from user and chcek whether that number is greater that 100 or not
/*
Input  :10 10
Output :Equal

Input  :10 12
OutPut :Not Equal

Input  : 10 -10
Output :Not Equal
*/

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkEqual(int iNo1 ,int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1= 0 ,iValue2= 0;
    BOOL bRet = FALSE;

    printf("Please Enter First numbers:\n");
    scanf("%d",&iValue1);

    printf("Please Enter Second numbers:\n");
    scanf("%d",&iValue2);

    bRet = chkEqual(iValue1,iValue2) ;

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}