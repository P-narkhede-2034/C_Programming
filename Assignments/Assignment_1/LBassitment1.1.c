////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : int Divide(int iNo1 , int iNo2)
//      DESCRIPTION    : This function performs division of two integers 
//                        and returns the result. If denominator is zero,
//                        it returns -1 as an error indication.
//      INPUT          : iNo1 , iNo2 
//      OUTPUT         : Integer 
//      AUTHOR         : PRANAV MANOJ NARKHEDE
//      DATE           : 19/11/2025
////////////////////////////////////////////////////////////////////////
int Divide(int iNo1 , int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 15 ,iValue2 = 5;
    int iRet = 0;

    iRet = Divide(15,5);

    printf("Division is : %d",iRet);

    return 0;
}
