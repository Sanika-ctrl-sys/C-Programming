//Accept amount in us dollar and return its corresponding value in indian currency. Consider 1$ as 70 rupees.
//Input : 10
//Output:700
//Input : 3
//Output: 270
//Input : 1200
//Output: 84000

#include <stdio.h>

int Number (int iNo)
{
    int iAns = 0;
    iAns = iNo * 70;

    return iAns;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in US dollars:\n");
    scanf("%d",&iValue);

    iRet =Number(iValue);

    printf("Indian Currency is : %d",iRet);

    return 0;
}
