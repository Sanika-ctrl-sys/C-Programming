//Accept number of rows and number of columns from user and display below pattern
/*
Input  : 5
Output : 5  #  4  #  3  #  2  #  1  # 
*/

#include <stdio.h>

void Pattern(int iNo)
{
   int i = 1 ;
   char ch='A';
   
   for(i = 1; i <= iNo ; i++)
   {
        printf("%c\t",ch); 
        ch++;  
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number of rows and columns :");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}