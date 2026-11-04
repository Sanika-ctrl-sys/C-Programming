// write a program which accept number from user and return diffrence betwwen summation of  even digits and summation of odd digits.  
/*
Input  :2395
Output :-15  (2 - 17)

Input  :1018
Output :6    (8 - 2)

Input  :8440
Output :16   (16 - 0)

Input  :5733
Output :-18   (0 - 18)
*/
#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0 ,iOdd = 0 , iDiff =0;

    if(iNo <0)
    {
        iNo =-iNo;
    }
    while(iNo != 0)
    {
        iDigit =iNo%10;
     
        if(((iDigit % 2)==0))
        {
            iEven = iEven + iDigit;
        } 
        else
        {
            iOdd = iOdd + iDigit;
        } 
         
        iNo = iNo /10;         
    }
    iDiff = iEven - iOdd;
    return iDiff;

}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);
    
    return 0;
}

