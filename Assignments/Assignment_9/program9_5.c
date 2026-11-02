// Write a program which returns difference between Even factorial and odd factorial of given number.
//Input: 5
//Output: -7     (8-15)
//Input:-5
//Output:-7       (8-15)

#include<stdio.h>
int OddFactorial(int iNo)
{
     
     int iEvenFact=1;
     int iOddFact=1;
     int iDiff=0;

     if(iNo<0)
     {
        iNo=-iNo;
     }
     while(iNo>0)
     {
        if(iNo%2==0)
        {
            iEvenFact = iEvenFact * iNo;
        }
        else
        {
            iOddFact = iOddFact * iNo;
        }
        iNo--;
     }
     iDiff = iEvenFact - iOddFact ;

     return iDiff;

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}








