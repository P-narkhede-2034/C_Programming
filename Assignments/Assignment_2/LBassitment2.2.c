#include<stdio.h>

void Display(int ino)
{
    
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino > 0)
    {
        printf("*\t");
        ino --;
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

