//S) Check if number is divisible by S

#include<stdio.h>

void DisplayFactors(int iNo)
{
   if (iNo % 5 == 0)
   {
         printf("that no is divisible by 5");
   }
   else
   {
        printf("that no is not divisible by 5");
   }
   
}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}