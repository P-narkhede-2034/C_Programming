#include<stdio.h>

void Display(int ino)
{
    int i = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    i = 1;
    while( i <= ino)
    {
        printf("*\t");
        i++;
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