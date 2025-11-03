//2. Write a program which accept one number from user and check whether that
//number is greater than 100 or not.

#include<stdio.h>

void CheckGreater(int ino)
{
   if (ino > 100)
   {
    printf("Greater");
   }
   else
   {
    printf("Smaller");
   }       
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    CheckGreater(iValue);
    return 0;
}
