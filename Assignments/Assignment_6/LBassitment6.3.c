// 3. Write a program which accept two numbers and check whether numbers are equal or not.

#include<stdio.h>

void CheckEqual(int ino1 ,int ino2)
{
       if(ino1 == ino2)
       {
        printf("Number are equal");
       }
       else
       {
        printf("Number are not equal");
       }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the first number :");
    scanf("%d",&iValue1);

    printf("Enter the  secound number :");
    scanf("%d",&iValue2);

    CheckEqual(iValue1 , iValue2);
    return 0;
}
