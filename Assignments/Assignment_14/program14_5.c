// Write a program which accept number from user and return Difference between Summation of all its factors and non factors
/*
Input  : 12
Output : -34     (16 -50)

Input  : 10
Output : -29     (8 - 37)
 
*/

#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0, iSumnonFact = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1 ; iCnt < iNo ; iCnt ++)
    {
        if((iNo % iCnt) == 0)
        {
           iSumFact =iSumFact +iCnt;
        }
        else
        {
           iSumnonFact =iSumnonFact+iCnt;
        }
        
    }
    iDiff = iSumFact - iSumnonFact ;
    return iDiff;

}
int main()
{
    int iValue = 0 , iRet =0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Diffrence of all Factors or NonFactors :%d\n",iRet);
    return 0;
}