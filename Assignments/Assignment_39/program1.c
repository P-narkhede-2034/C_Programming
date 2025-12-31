#include<stdio.h>

/*
FUNCTION NAME : Display
DESCRIPTION   : Displays '*' five times using recursion
INPUT         : No input
OUTPUT        : Prints pattern "* * * * *"
AUTHOR        : Pranav Narkhede
DATE          : 31/12/2025
*/
void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("* ");
        i++;
        Display();   
    }
}

int main()
{
    Display();
    return 0;
}
