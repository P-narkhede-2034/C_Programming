// 5. Write a program which accept N and print first 5 multiples of N.

#include <stdio.h>

void DisplayMultiply(int ino)
{
    int i = 0 , multi = 0;
    i = 1;
    while(i <= 5)
    {
        multi =ino * i;
        printf("%d\n",multi);
        i++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayMultiply(iValue);
    return 0;
}