//4. Accept two numbers from user and display first number in second
//number of times.
#include<stdio.h>

void Display(int ino , int iFrequency)
{
    int i = 0;
    if( ino < 0)
    {
        ino = -ino;
    }
    
    for(i = 1 ; i<= iFrequency ; i++)
    {
        printf("%d\t",ino);
    }
           
}
int main()
{
    int iValue = 0;
    int icount = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    printf("Enter Frequency:");
    scanf("%d",&icount);

    Display(iValue,icount);
    return 0;
}

