// 4. Accept N numbers from user and return frequency of 11 form it.

#include <stdio.h>
#include <Stdlib.h>

int CountNum(int arr[],  int ilenghth)
{
    int i = 0; 
    int iFrequency = 0;

    for(i = 0; i < ilenghth ; i++)
    {
       if((arr[i])== 11)
        {
            iFrequency ++;
        }
    }
    return iFrequency;
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
 
    iRet = CountNum(ptr , iSize);
    printf("Even no frequency in array is %d",iRet);
    return 0;
}