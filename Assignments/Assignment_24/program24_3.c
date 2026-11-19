/* Write aprogram which accept string from user and accept one character .Return index of first occurrence of that character 
Input   : "Marvellous Multi OS"
           M
Output  :  0

Input   : "Marvellous Multi OS"
           w
Output  :  -1
*/

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return i;
        }

        i++;
    }

    return -1;

}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    
    printf("Character Location is %d", iRet);
    
    return 0;

}