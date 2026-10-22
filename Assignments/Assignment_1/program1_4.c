//Acccept one number and check whether is d 

#include<stdio.h>
typedef int boolean;
# define TRUE 1
# define FALSE 0

boolean Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    boolean bRet = FALSE;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("%d is divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n", iValue);
    }

    return 0;
}
