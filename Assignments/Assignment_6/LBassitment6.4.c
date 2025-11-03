//4. Write a program which accept three numbers and print its multiplication.
#include<stdio.h>

int multiplication(int ino1 ,int ino2, int ino3)
{
      int sum = 0;
      sum = ino1 * ino2 * ino3 ;
      return sum;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0, result = 0;

    printf("Enter the first number :");
    scanf("%d",&iValue1);

    printf("Enter the  secound number :");
    scanf("%d",&iValue2);

    printf("Enter the  secound number :");
    scanf("%d",&iValue3);

     result =multiplication(iValue1 , iValue2 ,iValue3);
     printf("multiplaction is %d\n",result);
    return 0;
}
