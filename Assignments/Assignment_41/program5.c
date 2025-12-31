#include<stdio.h>

/*
FUNCTION NAME : ProductDigits
DESCRIPTION   : Calculates product of digits of a number using recursion
INPUT         : Integer (iNo)
OUTPUT        : Returns product of digits
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
int ProductDigits(int iNo)
{
    if(iNo == 0)
    {
        return 1;   
    }
    else
    {
        return (iNo % 10) * ProductDigits(iNo / 10);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = ProductDigits(iValue);

    printf("%d", iRet);

    return 0;
}
