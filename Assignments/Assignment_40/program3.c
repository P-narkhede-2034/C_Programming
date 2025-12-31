#include <stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays inp to 1 times using recursion
INPUT         : Integer (iNo)
OUTPUT        : Prints  number
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display(int no)
{

    if(no >= 1)
    {
        printf("%d\t", no);
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