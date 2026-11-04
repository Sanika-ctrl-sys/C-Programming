// Write a program which accept name from user and print that name
/*
Input : Sanika Pandit
Output: Sanika Pandit
*/

#include <stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name:\n");
    scanf("%[^'\n']s",Name);

    printf("Your name is :%s\n",Name);
    return 0 ;
}