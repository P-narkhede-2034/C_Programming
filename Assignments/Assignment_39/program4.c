#include<stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays charater from A to F using recursion
INPUT         : No input
OUTPUT        : Prints charater A to F in separate lines
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display()
{
    static char ch = 'A';

    if(ch <= 'F')
    {
        printf("%c\n", ch);
        ch++;
        Display();  
    }
}

int main()
{
    Display();
    return 0;
}
