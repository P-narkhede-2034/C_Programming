////////////////////////////////////////////////////////////////////////
//  QUESTION : Write a program which accept number from user and 
//             display its digits in reverse order.
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : void DisplayDigit(int ino)
//      DESCRIPTION    : This function prints digits of a number 
//                       in reverse order.
//      INPUT          : ino
//      OUTPUT         : void
//      AUTHOR         : PRANAV MANOJ NARKHEDE
////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("enter the no :");
    scanf("%d",&iValue);
    DisplayDigit(iValue);

    return 0;
}
