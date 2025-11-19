//5. Accept N numbers from user and return product of all odd elements.

#include <stdio.h>
#include <Stdlib.h>

int CountOddProduct(int arr[],  int ilenghth)
{
    int i = 0; 
    int iOdd = 0;

    for(i = 0; i < ilenghth ; i++)
    {
        if((arr[i] % 2 )!= 0)
        {
            iOdd = iOdd + arr[i];
        }
        
    }
    return iOdd;
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
 
    iRet = CountOddProduct(ptr , iSize);
    printf("Even no frequency in array is %d",iRet);
    return 0;
}