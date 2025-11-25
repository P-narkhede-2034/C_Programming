////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : bool Check(int iNo)
//      DESCRIPTION    : This function checks whether the given number
//                        is divisible by 5 or not.
//      INPUT          : iNo (Integer number)
//      OUTPUT         : Boolean (true / false)
//      AUTHOR         : PRANAV MANOJ NARKHEDE
//      DATE           : 19/11/2025
////////////////////////////////////////////////////////////////////////
bool Check(int iNo)
{
    if(( iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////
int main()
{
    int iVAlue = 0;
    bool bRet = false;

    printf("Enter the Number :");
    scanf("%d",&iVAlue);

    bRet = Check(iVAlue);

    if (bRet == true)
    {
        printf("Dividible by 5");
    } 
    else
    {
        printf("NOt Divisible by 5");
    }
    return 0;
}
