// write a program which accept number from user and chcek whether it contains 0 init or not
/*
Input  :2395
Output :ther is no Zero

Input  :1018
Output :It Contain Zero

Input  :9000
Output :It Contain Zero
*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkzero(int iNo)
{
    int iDigit = 0;
    if(iNo <0)
    {
        iNo =-iNo;
    }
    while(iNo != 0)
    {
        iDigit =iNo%10;
        
        if(iDigit==0)
        {
            return TRUE;
        }
        iNo = iNo /10;  
    }
    return FALSE;

}
int main()
{
    int iValue =0;
    BOOL bRet =FALSE;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = chkzero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contain Zero\n");
    }
    else 
    {
        printf("There is no Zero\n");
    }
    return 0;
}

