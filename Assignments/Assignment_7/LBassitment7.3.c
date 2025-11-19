//3. Write a program which accept number from user and print its numbers line.
#include <stdio.h>

void DisplayNumberline(int ino)
{
    int i = 0;
  for ( i= -ino ; i <= ino ; i++)
  {
    printf("%d\t",i);
  }
 
}

int main()
{
    int iValue = 0;
   

    printf("Enter a number: ");
    scanf("%d", &iValue);

    

    DisplayNumberline(iValue);

    

    return 0;
}
