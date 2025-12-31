#include<stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays numbers from 1 to 5 using recursion
INPUT         : No input
OUTPUT        : Prints numbers 1 to 5 in separate lines
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("%d\n", i);
        i++;
        Display();  
    }
}

int main()
{
    Display();
    return 0;
}
