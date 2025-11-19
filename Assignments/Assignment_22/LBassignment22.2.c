// 2. Accept N numbers from user and return difference between frequency of
//even number and odd numbers.


#include <stdio.h>
#include <Stdlib.h>

int CountDiffEvenOdd(int arr[],  int ilenghth)
{
    int i = 0; 
    int iEven = 0 , iOdd = 0;

    for(i = 0; i < ilenghth ; i++)
    {
        if((arr[i] % 2 )== 0)
        {
            iEven ++;
        }
        else
        {
            iOdd ++;
        }
    }
    return (iEven - iOdd);
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
 
    iRet = CountDiffEvenOdd(ptr , iSize);
    printf("Even no frequency in array is %d",iRet);
    return 0;
}