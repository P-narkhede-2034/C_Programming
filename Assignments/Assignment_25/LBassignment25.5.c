//5. Accept N numbers from user and display all such elements which are
//multiples of 11.

#include <stdio.h>
#include <Stdlib.h>

void Display(int arr[],  int ilenghth)
{
    int i = 0; 

    for(i = 0 ; i < ilenghth ; i++)
    {
        if (arr[i] %  11 == 0)
        {
            
            printf( " the no dividible by 11 is :-  %d\n",arr[i]);
           
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
 
    Display(ptr , iSize);

    free(ptr);
   
    return 0;
}

///////////////////////////////////////////////////////////////////////
//      FUNCTION NAME :   Display(int arr[], int iLength)
//
//      DESCRIPTION   :   This function accepts N numbers from user 
//                        and displays all elements which are 
//                        multiples of 11.
//
//      INPUT         :   void
//
//      OUTPUT        :   void
//
//      AUTHOR        :   PRANAV MANOJ NARKHEDE
//
//      DATE          :   19/11/2025
///////////////////////////////////////////////////////////////////////
