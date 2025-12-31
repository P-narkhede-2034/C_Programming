#include<stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays numbers from 5 to  using recursion
INPUT         : No input
OUTPUT        : Prints numbers 5 to 1 in separate lines
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display()
{
    static int i = 5;

    if(i >= 1)
    {
        printf("%d\n", i);
        i--;
        Display();  
    }
}

int main()
{
    Display();
    return 0;
}
