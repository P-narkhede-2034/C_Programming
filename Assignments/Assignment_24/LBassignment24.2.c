// 2. Accept N numbers from user and return the smallest number.

#include <stdio.h>
#include <Stdlib.h>

int Maxmimum(int arr[],  int ilenghth)
{
    int i = 0; 
    int max = 0;

    max = arr[0];
    for(i = 0 ; i < ilenghth ; i++)
    {
        if(arr [i] < max)
        {
            max = arr[i];
        }
    }
    return max;
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
 
    iRet = Maxmimum(ptr , iSize);
    printf("the smallest no is  %d",iRet);
    return 0;
}