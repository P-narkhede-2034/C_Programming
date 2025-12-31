#include<stdio.h>

/*
FUNCTION NAME : SumDigits
DESCRIPTION   : Calculates sum of digits using recursion
INPUT         : Integer (iNo)
OUTPUT        : Prints sum of digits
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void SumDigits(int iNo)
{
    static int sum = 0;

    if(iNo != 0)
    {
        sum = sum + (iNo % 10);
        SumDigits(iNo / 10); 
    }
    else
    {
        printf("Sum of digits = %d", sum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    SumDigits(iValue);

    return 0;
}
