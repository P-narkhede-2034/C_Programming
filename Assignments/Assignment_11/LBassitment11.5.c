//5. Write a program which accept accept range from user and display all numbers in
//between that range in reverse order.


#include<stdio.h>

void RangeDisplay(int ino1 ,int ino2)
{
    int i = 0;
     for( i = ino2 ; i >= ino1 ; i--)
     {
        printf("%d\t",i);
     }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the first number :");
    scanf("%d",&iValue1);

    printf("Enter the  secound number :");
    scanf("%d",&iValue2);


    RangeDisplay(iValue1 , iValue2);
    return 0;
}