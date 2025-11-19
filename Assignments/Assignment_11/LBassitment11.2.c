//2. Write a program which accept range from user and display all even numbers in
//between that range.

#include<stdio.h>

void RangeDisplayEven(int ino1 ,int ino2)
{
    int i = 0;
     for( i = ino1 ; i <= ino2 ; i++)
     {
        if(i % 2 == 0)
        {
             printf("%d\t",i);
        }
       
     }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the first number :");
    scanf("%d",&iValue1);

    printf("Enter the  secound number :");
    scanf("%d",&iValue2);


    RangeDisplayEven(iValue1 , iValue2);
    return 0;
}
