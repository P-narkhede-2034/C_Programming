//4. Write a program which accept range from user and return addition of all even
//numbers in between that range. (Range should contains positive numbers only)

#include<stdio.h>

int RangeDisplayEven(int ino1 ,int ino2)
{
    int i = 0;
     int j = 0;
     for( i = ino1 ; i <= ino2 ; i++)
     {
        if(i % 2 == 0)
        {
             j = j + i;
        }
       
     }
     return j;
}
int main()
{
    int iValue1 = 0,iValue2 = 0, isum = 0;

    printf("Enter the first number :");
    scanf("%d",&iValue1);

    printf("Enter the  secound number :");
    scanf("%d",&iValue2);


    isum =RangeDisplayEven(iValue1 , iValue2);
    printf("sum is all even addition : %d",isum);
    return 0;
}
