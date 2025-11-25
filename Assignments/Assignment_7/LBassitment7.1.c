//I.Write a program which accept number from user and print that number of $ & * on screen.
#include <stdio.h>

void pattern(int ino)
{
    if (ino < 0)
    {
        ino = -ino;
    }
    int i = 0;
    i = 1;
  while(i <= ino)
  {
    printf(" $    * \t");
    i++;
  }
 
}

int main()
{
    int iValue = 0;
   

    printf("Enter a number: ");
    scanf("%d", &iValue);

    

    pattern(iValue);

    

    return 0;
}
