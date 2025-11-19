//1. Accept N numbers from user and return difference between summation
//of even elements and summation of odd elements.

#include <stdio.h>
#include <Stdlib.h>

DifferenceEvenOdd(int brr[], int iLength)
{
    int i = 0; 
    int even = 0;
    int odd = 0;
    int total = 0;

    for(i = 0 ; i < ilenghth ; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even = arr[i] + even;
        }
        else 
        {
            odd = arr[i] + odd;
        }

        total = even - odd ;
       
    }
     return total;
}
int main()
{
    int iSize = 0 ,iRet = 0 ;
    int *ptr = NULL;

    printf("Enter the frequency \n");
    scanf("%d",&iSize);
 
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements \n");

    int i = 0;
    for( i = 0; i < iSize ; i++)
    {
        scanf("%d",&ptr[i]);
    }
 
    iRet =DifferenceEvenOdd(ptr , iSize);
    printf("the Maximum no is  %d",iRet);
    return 0;
}


///////////////////////////////////////////////////////////////////////
//      FUNCTION NAME :   DifferenceEvenOdd(int arr[], int iLength)
//
//      DESCRIPTION   :   This function accepts N numbers from user 
//                        and returns the difference between the 
//                        summation of even elements and summation 
//                        of odd elements.
//
//      INPUT         :   int[], int
//
//      OUTPUT        :   int
//
//      AUTHOR        :   PRANAV MANOJ NARKHEDE
//
//      DATE          :   19/11/2025
///////////////////////////////////////////////////////////////////////
