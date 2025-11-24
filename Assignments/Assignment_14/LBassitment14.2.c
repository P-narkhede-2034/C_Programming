////////////////////////////////////////////////////////////////////////
//  QUESTION : Write a program which accept number from user and check 
//             whether it contains 0 in it or not.
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : void checkbool(int ino)
//      DESCRIPTION    : This function checks if the number contains 0.
//      INPUT          : ino
//      OUTPUT         : void
//      AUTHOR         : PRANAV MANOJ NARKHEDE
////////////////////////////////////////////////////////////////////////
void checkbool(int ino)
{
    int idigit = 0;
    int arr[100];  
    int i = 0;     

    while (ino != 0)
    {
        idigit = ino % 10;   // extract last digit
        arr[i] = idigit;     // store in array
        ino = ino / 10;      // remove last digit
        i++;                 // move to next index
    }

    printf("Digits stored in array (in reverse order):\n");
    for (int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }

    // Check if zero is present
    bool hasZero = false;
    for (int j = 0; j < i; j++)
    {
        if (arr[j] == 0)
        {
            hasZero = true;
            break;
        }
    }

    printf("\n");
    if (hasZero)
        printf("It contains zero.\n");
    else
        printf("There is no zero.\n");
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    checkbool(iValue);

    return 0;
}
