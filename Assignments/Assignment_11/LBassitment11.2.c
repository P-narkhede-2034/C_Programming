////////////////////////////////////////////////////////////////////////
//  QUESTION : Write a program which accept range from user and display 
//             all even numbers in between that range.
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : void RangeDisplayEven(int ino1 , int ino2)
//      DESCRIPTION    : This function displays all even numbers within
//                        the given range.
//      INPUT          : ino1, ino2
//      OUTPUT         : void
//      AUTHOR         : PRANAV MANOJ NARKHEDE
//      DATE           : 
////////////////////////////////////////////////////////////////////////
void RangeDisplayEven(int ino1 , int ino2)
{
    int i = 0;
    for(i = ino1 ; i <= ino2 ; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t",i);
        }
    }
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);

    printf("Enter the second number : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 , iValue2);

    return 0;
}
