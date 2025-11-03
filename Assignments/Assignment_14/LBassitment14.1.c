// 1. Write a program which accept number from user and display its digits in reverse
//order.
#include<stdio.h>

void DisplayDigit(int ino)
{
    int idigit = 0;

    printf("-------------------------------------------------\n");
    printf("original value of ino is %d\n",ino);

    while(ino != 0)
    {
        printf("-------------------------------------------------\n");

        idigit = ino % 10;
       
        ino = ino / 10;
        printf("%d\n",ino);
    }
     printf("-------------------------------------------------\n");
}

int main()
{

    int iValue = 0;

    printf("enter the no :");
    scanf("%d",&iValue);
    DisplayDigit(iValue);
    

    return 0;
}