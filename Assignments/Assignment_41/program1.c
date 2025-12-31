#include<stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays numbers from iNo to 1 with '*' using recursion
INPUT         : Integer (iNo)
OUTPUT        : Prints pattern "5 * 4 * 3 * 2 * 1 *"
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d * ", iNo);
        Display(iNo - 1);   // Recursive call
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
