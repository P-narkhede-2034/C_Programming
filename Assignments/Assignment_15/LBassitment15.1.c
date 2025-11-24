////////////////////////////////////////////////////////////////////////
//  QUESTION : Write a program which accept number from user and return 
//             the count of even digits.
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : void CountEvenDigits(int ino)
//      DESCRIPTION    : This function counts even digits in number.
//      INPUT          : ino
//      OUTPUT         : void
//      AUTHOR         : PRANAV MANOJ NARKHEDE
////////////////////////////////////////////////////////////////////////
void CountEvenDigits(int ino)
{
    int idigit = 0;
    int arr[100];  
    int i = 0; 
    int frequency = 0;    

    while (ino != 0)
    {
        idigit = ino % 10;   
        arr[i] = idigit;     
        ino = ino / 10;      
        i++;                 
    }

    for (int j = 0; j < i; j++)
    {
        if (arr[j] % 2 == 0)
        {
            frequency++;
        }
    }
     
    printf("the count of even digits is : %d",frequency);
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    CountEvenDigits(iValue);

    return 0;
}
