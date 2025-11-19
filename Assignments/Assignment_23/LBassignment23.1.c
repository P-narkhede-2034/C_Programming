// 1. Accept N numbers from user and accept one another number as NO
//check whether NO is present or not.

#include <stdio.h>
#include <Stdlib.h>
#include <Stdbool.h>

bool CountNum(int arr[],  int ilenghth , int ino)
{
    int i = 0; 
     bool bFlag = false;
    for(i = 0; i < ilenghth ; i++)
    {
       if((arr[i])== ino)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int iSize = 0 ,bRet = false , iNumber = 0;
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
 
    bRet = CountNum(ptr , iSize , iNumber);
    
    if(bRet == true)
    {
        printf ("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    
    return 0;
}