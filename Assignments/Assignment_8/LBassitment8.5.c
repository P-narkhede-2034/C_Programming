//5. Write a program which accept number from user and display its table in reverse order.

#include <stdio.h>

void DisplayMultiply(int ino)
{
    int i = 0 , multi = 0;
    i = 10;
    while(i >= 1)
    {
        multi =ino * i;
        printf("%d\n",multi);
        i--;
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