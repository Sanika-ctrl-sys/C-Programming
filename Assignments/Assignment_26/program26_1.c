/*
Write a program which display ASCII table . Table contains symbol , Decimal , Hexadecimal and Octal representation of every member from o to 255
*/

#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Decimal\tSymbol\tHexadecimal\tOctal\n");
    printf("---------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%c\t%X\t\t%o\n", i, i, i, i);
    }

}
int main()
{
    DisplayASCII();

    return 0 ;
}