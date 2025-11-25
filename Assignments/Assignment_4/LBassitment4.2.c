//2.Write a program which accept number from user and display its factors in
//decreasing order.
#include <stdio.h>

int FactRev(int ino)
{
    int i = 0;

    if (ino < 0)
    {
        ino = -ino; 
    }

    for (i = ino / 2; i >= 1; i--)
    {
        if (ino % i == 0)
        {
            printf("%d\t", i);
        }
    }

 
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    

    FactRev(iValue);

    

    return 0;
}
