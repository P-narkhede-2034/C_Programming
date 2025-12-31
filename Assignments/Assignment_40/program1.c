#include <stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays '*' iNo times using recursion
INPUT         : Integer (iNo)
OUTPUT        : Prints '*' pattern
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display(int no)
{
    if(no >= 1)
    {
        printf("*\t");
        Display(no-1);
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter the number ");
    scanf("%d", &ivalue);

    Display(ivalue);
    return 0;
}