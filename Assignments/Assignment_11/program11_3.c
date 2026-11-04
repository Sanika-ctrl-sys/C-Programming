// Write a program which accept rangr from user and return addition all number in between that range 
/*
Input  : 23 35
Output : 212

Input  : 10 18
Output : 126

Input  : -10 2
Output : Invalid

Input  : 90 18
Output : Invalid
*/
#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt=0 , iSum =0;

    if(iStart<0 || iStart >iEnd)
    {
        printf("Invalid\n");
        return -1;
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
       
            iSum =iSum + iCnt;
        
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0 ,iRet =0;

    printf("Enter Startint point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    if(iRet == -1)
    {
        printf("Invalid\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }
    return 0;

}


