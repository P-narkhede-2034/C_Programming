#include<stdio.h>

/*
FUNCTION NAME : Fact
DESCRIPTION   : Calculates factorial of a number using recursion
INPUT         : Integer (iNo)
OUTPUT        : Returns factorial value
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
int Fact(int iNo)
{
    if(iNo <= 1)
    {
        return 1; 
    }
    else
    {
        return iNo * Fact(iNo - 1);   
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("%d", iRet);

    return 0;
}
