//write a program which accept 1 no from user & print that no of even no on screen

#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d\t", iCnt * 2);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}
