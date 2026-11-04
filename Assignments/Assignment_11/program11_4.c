// Write a program which accept rangr from user and return addition all even number in between that range 
/*
Input  : 23 35
Output : 108 

Input  : 10 18
Output : 70

Input  : -10 2
Output : Invalid

Input  : 90 18
Output : Invalid
*/
#include <stdio.h>

int  RangeSum(int iStart, int iEnd)
{
    int iCnt =0 ,iSum =0;

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0 , iRet =0;

    printf("Enter Startint point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    if(iRet ==-1 )
    {
        printf("Invalid:");
    }
    else
    {
    printf("Addition is %d",iRet);
    }
    return 0;

}


