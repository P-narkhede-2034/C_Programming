////////////////////////////////////////////////////////////////////////
//  QUESTION : Write a program which accept range from user and return 
//             addition of all numbers in between that range.
//             (Range should contains positive numbers only)
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : RangeDisplayEven
//      DESCRIPTION    : This function returns addition between range.
//      INPUT          : ino1, ino2
//      OUTPUT         : void
//      AUTHOR         : PRANAV MANOJ NARKHEDE
//      DATE           :
////////////////////////////////////////////////////////////////////////
void RangeDisplayEven(int ino1 ,int ino2)
{
    int i = 0;
    int j = 0;

    for( i = ino1 ; i <= ino2 ; i++)
    {
        j = j + i ;
    }
    printf("%d",j);
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the first number :");
    scanf("%d",&iValue1);

    printf("Enter the secound number :");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 , iValue2);

    return 0;
}
