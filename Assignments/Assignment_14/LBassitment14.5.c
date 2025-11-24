////////////////////////////////////////////////////////////////////////
//  QUESTION : Write a program which accept number from user and count
//             frequency of such digits which are less than 6.
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : void CountLessThanSix(int ino)
//      DESCRIPTION    : This function counts digits less than 6.
//      INPUT          : ino
//      OUTPUT         : void
//      AUTHOR         : PRANAV MANOJ NARKHEDE
////////////////////////////////////////////////////////////////////////
void CountLessThanSix(int ino)
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
        if (arr[j] < 6)
        {
            frequency++;
        }
    }
     
    printf("the no frequency less than 6 is : %d",frequency);
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    CountLessThanSix(iValue);

    return 0;
}
