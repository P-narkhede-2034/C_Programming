//4. Accept N numbers from user and display all such elements which are
//divisible by 3 and 5.

#include <stdio.h>
#include <Stdlib.h>

void  DisplayDivisibleBy3And5(int arr[],  int ilenghth)
{
    int i = 0; 
    int even = 0;
    int odd = 0;
    int total = 0;

    for(i = 0 ; i < ilenghth ; i++)
    {
        if (arr[i] % 5 == 0 && arr[i] % 3 == 0)
        {
            
            printf( " the no dividible by 3 & 5 is :-  %d\n",arr[i]);
           
       }
    
    }
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
 
     DisplayDivisibleBy3And5(ptr , iSize);
   
    return 0;
}

///////////////////////////////////////////////////////////////////////
//      FUNCTION NAME :   DisplayDivisibleBy3And5(int arr[], int iLength)
//
//      DESCRIPTION   :   This function accepts N numbers from user 
//                        and displays all elements which are 
//                        divisible by BOTH 3 and 5.
//
//      INPUT         :   int[], int
//
//      OUTPUT        :   void
//
//      AUTHOR        :   PRANAV MANOJ NARKHEDE
//
//      DATE          :   19/11/2025
///////////////////////////////////////////////////////////////////////
