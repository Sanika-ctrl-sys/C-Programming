/*
Accept division of student from user and depends on the division display exam timing . there ate 4 division in shcool as A , B , C , D . Exam of division A at 7 AM , B at 8.30 AM, C at 9.20 AM and D at 10.30 AM (Application should be case insensitive)
Input  : C
Output : Your exam at 9.20 AM

Input  : d
Output :Your exam at 10.30 AM
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A':
            printf("Your exam at 7 AM");
            break;

        case 'B':
            printf("Your exam at 8.30 AM");
            break;

        case 'C':
            printf("Your exam at 9.20 AM");
            break;

        case 'D':
            printf("Your exam at 10.30 AM");
            break;

        default:
            printf("Invalid division");
            break;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the division");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}