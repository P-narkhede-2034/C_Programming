#include <stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays A to iNo times using recursion
INPUT         : Integer (iNo)
OUTPUT        : Prints letter
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display(int no)
{
    static int i = 'A';
    if(no >= 1)
    {
        printf("%c\t", i);
        i++;
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