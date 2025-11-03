//2. Accept amount in US dollar and return its corresponding value in Indian currency.
//Consider 1$ as 70 rupees.
#include <stdio.h>

int DollarToInr(int ino)
{
    int iinr = 0;
    iinr = ino * 70;
    return iinr;

      
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter doller to convert inr: ");
    scanf("%d", &iValue);

   iret= DollarToInr(iValue);
   printf("your indian rs is  :%d\n",iret);
    return 0;
}