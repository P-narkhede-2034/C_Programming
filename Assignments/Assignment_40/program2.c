#include <stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays 1 to iNo times using recursion
INPUT         : Integer (iNo)
OUTPUT        : Prints  number
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display(int no)
{
    static int i = 1;
    if(i <= no)
    {
        printf("%d\t", i);
        i++;
        Display(no);
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