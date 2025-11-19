//3. Accept N numbers from user and return the difference between largest
//and smallest number.

#include <stdio.h>
#include <Stdlib.h>

int Diffmixmin(int arr[],  int ilenghth)
{
    int i = 0; 
    int max = 0;
    int min = 0;
    int diff = 0;

    max = arr[0];
    min = arr[0];
    for(i = 0 ; i < ilenghth ; i++)
    {
        if(arr [i] > max)
        {
            max = arr[i];
        }
        else 
        {
            min = arr[i];
        }
    }
    diff = max - min ;
    return diff;
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
 
    iRet = Diffmixmin(ptr , iSize);
    printf("Difference btwn max & min  %d",iRet);
    return 0;
}