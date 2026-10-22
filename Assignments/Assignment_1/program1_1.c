//program to divide two numbers

#include<stdio.h>
int Divide(int ino1, int ino2)
{
    int iAns = 0;
    if(ino2 == 0)
    {
        return -1;
    }

    iAns = ino1 / ino2;
    return iAns;
}
int main()
{
    int iVlaue1 =15, iValue = 5;
    int iRet = 0;
    iRet = Divide(iVlaue1, iValue);

    printf("Division is : %d\n", iRet);

    return 0;
}
