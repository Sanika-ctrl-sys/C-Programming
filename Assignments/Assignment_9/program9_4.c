//write a program to find odd factorial of given number 
// input: 5
// output: 15    (5*3*1)

// input:-5
// output:15   (5*3*1)

// input: 10
// output: 945     (9*7*5*3*1)

#include<stdio.h>
int OddFactorial(int iNo)
{
     int iFact=1;

     if(iNo<0)
     {
        iNo=-iNo;
     }
     while(iNo>0)
     {
        if(iNo%2!=0)
        {
            iFact=iFact*iNo;

        }
        iNo--;
     }
     return iFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}
