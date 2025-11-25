////////////////////////////////////////////////////////////////////////
//  QUESTION : Write a program which accept number from user and count
//             frequency of 4 in it.
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : void checkbool(int ino)
//      DESCRIPTION    : This function counts frequency of digit 4.
//      INPUT          : ino
//      OUTPUT         : void
//      AUTHOR         : PRANAV MANOJ NARKHEDE
////////////////////////////////////////////////////////////////////////
void checkbool(int ino)
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
        if (arr[j] == 4)
        {
            frequency++;
        }
    }
     
    printf("the no of 4 frequency is :%d",frequency);
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
