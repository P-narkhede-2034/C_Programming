//5.Write a program which accept number from user and return difference between
//summation of all its factors and non factors.
#include <stdio.h>

int SummationFactorNonFactor(int ino)
{
    int i = 0;
    int multi = 0;
    int isum = 0;
    int summation = 0;

    if (ino < 0)
    {
        ino = -ino; 
    }

    for (i = 1; i <= ino / 2; i++)
    {
        if (ino % i == 0)
        {
            multi = multi + i;
        }
    }

    for(i = 1 ; i <= ino; i++)
    {
       
            if((ino % i) != 0)
            {
               isum = isum + i;
            }
        
    }

   summation = multi - isum;
    return summation;
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iret = SummationFactorNonFactor(iValue);

    printf("summation is  : %d\n", iret);

    return 0;
}
