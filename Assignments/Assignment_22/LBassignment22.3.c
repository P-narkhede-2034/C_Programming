// 3. Accept N numbers from user check whether that numbers contains 11 in
//it or not.

#include <stdio.h>
#include <Stdlib.h>

void CheckNUmber(int arr[],  int ilenghth)
{
    int i = 0; 

    for(i = 0; i < ilenghth ; i++)
    {
        if((arr[i])== 11)
        {
            printf(" 11 is present in array");
            break;
        }
    }
   
}
int main()
{
    int iSize = 0 ;
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
 
     CheckNUmber(ptr , iSize);

        return 0;
}