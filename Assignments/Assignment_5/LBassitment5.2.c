//2. Find Maximum of Two Numbers


#include<stdio.h>

void CheckMaxMin(int ino1 , int ino2)
{
    if( ino1 >= ino2)
    {
        printf("  maximum no %d\n",ino1);;
        
         printf(" minimum no %d\n",ino2);
    }
    else 
    {
        printf(" minimum no %d\n",ino1);

        printf("  maximum no %d\n",ino2);
    }     
}
int main()
{
    int iValue1 = 0 , iValue2 = 0; 

    printf("Enter the number :");
    scanf("%d",&iValue1);

    printf("Enter the number :");
    scanf("%d",&iValue2);

    CheckMaxMin(iValue1,iValue2);
    return 0;
}

