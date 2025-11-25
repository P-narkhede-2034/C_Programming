//1. Check Even or Odd
#include<stdio.h>

void CheckEvenOdd(int ino)
{
    int i = 0;
    if( ino < 0)
    {
        ino = -ino;
    }
    
        if( ino % 2 == 0)
        {
            printf("That is even no %d\t",ino);
        } 
        else
        {
            printf("That is odd no %d\t",ino);
        }        
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    return 0;
}

