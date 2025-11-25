// 4. Write a program which accepts N from user and print all odd numbers up to N.

#include <stdio.h>

void OddDisplay(int ino)
{
    int i = 0;
  for ( i= 1 ; i <= ino ; i++)
  {
    if(i % 2  != 0)
    {
            printf("%d\n",i);
    }

  }
 
}

int main()
{
    int iValue = 0;
   

    printf("Enter a number: ");
    scanf("%d", &iValue);

    

    OddDisplay(iValue);

    

    return 0;
}