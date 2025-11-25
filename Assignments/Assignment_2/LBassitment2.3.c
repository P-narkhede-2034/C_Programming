#include<stdio.h>

void Display(int ino)
{
    
    if( ino < 10)
    {
        printf("hello");
    }
    else
    {
        printf("demo");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

