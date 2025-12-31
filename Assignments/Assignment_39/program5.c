#include<stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays charater from a to f using recursion
INPUT         : No input
OUTPUT        : Prints charater a to f in separate lines
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display()
{
    static char ch = 'a';

    if(ch <= 'f')
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
