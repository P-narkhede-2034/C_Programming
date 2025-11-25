//I.Write a program which accept one number from user and print that number of
//even numbers on screen.
#include<stdio.h>

void PrintEven(int ino)
{
    int i = 0;
    if( ino < 0)
    {
        ino = -ino;
    }
    
    for(i = 1 ; i <= ino; i++)
    {
 
        printf("%d\t",i*2);
    }

           
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}

