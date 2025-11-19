//3. Accept N numbers from user and accept one another number as NO
//return index of last occurrence of that NO.

#include <stdio.h>
#include <Stdlib.h>

int CountNum(int arr[],  int ilenghth , int ino)
{
    int i = 0; 
    int iIndex = 0;

    for(i = 0; i < ilenghth ; i++)
    {
       if((arr[i])== ino)
        {
            iIndex = i;
        }
        else
        {
            iIndex = -1;
        }
    }
    return iIndex;
}
int main()
{
    int iSize = 0 ,iRet = 0 , iNumber = 0;
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

    printf("Enter the no to count frequency in array\n");
    scanf("%d", &iNumber);
 
    iRet = CountNum(ptr , iSize , iNumber);
    printf("Index of that no is  %d",iRet);
    return 0;
}