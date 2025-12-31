#include<stdio.h>

/*
FUNCTION NAME : Strlen
DESCRIPTION   : Counts number of characters in string using recursion
INPUT         : Character pointer (str)
OUTPUT        : Returns length of string
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
int Strlen(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + Strlen(str + 1);  
    }
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}
