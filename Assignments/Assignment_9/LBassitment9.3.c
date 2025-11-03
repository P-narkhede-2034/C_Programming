//3. Write a program to find even factorial of given number.

#include<stdio.h>
int Evenfactorial(int ino)
{
     if( ino < 0)
    {
        ino = -ino;
    }
    int i = 0;
    int multi = 1;

    for( i = 1; i <= ino; i++)
    {
        if((i % 2 ) == 0)
        {
            multi = multi * i;
         
          
        }
    }
     
    return multi;

      
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

   iret= Evenfactorial(iValue);
   printf("%d",iret);
}
