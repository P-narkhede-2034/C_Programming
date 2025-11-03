//I.Write a program which accept number from user and display its multiplication of
//factors.
#include <stdio.h>

int MultiFactor(int ino)
{
    int i = 0;
    int multi = 1;

    if (ino < 0)
    {
        ino = -ino; 
    }

    for (i = 1; i <= ino / 2; i++)
    {
        if (ino % i == 0)
        {
            multi = multi * i;
        }
    }

    return multi; 
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iret = MultiFactor(iValue);

    printf("Multiplication of factors : %d\n", iret);

    return 0;
}
