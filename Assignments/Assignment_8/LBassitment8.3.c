//3.Write a program to find factorial of given number.
#include <stdio.h>

int factorial(int ino)
{
    int i = 0;
    int multi = 1;

    if (ino < 0)
    {
        ino = -ino; 
    }

    for (i = ino; i >= 1; i--)
    {
        
            multi = multi * i;
        
    }

    return multi; 
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iret = factorial(iValue);

    printf("Multiplication of factors : %d\n", iret);

    return 0;
}