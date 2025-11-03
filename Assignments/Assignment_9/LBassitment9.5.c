//5. Write a program which returns difference between Even factorial and odd factorial
//of given number.

#include<stdio.h>
int FactorialDifference(int ino)
{
     if( ino < 0)
    {
        ino = -ino;
    }
    int i = 0;
    int even = 1;
    int  odd = 1;
    int diff = 0;

    for( i = 1; i <= ino; i++)
    {
        if((i % 2 ) == 0)
        {
            even = even * i;
         
          
        }
    }

    for( i = 1; i <= ino; i++)
    {
        if((i % 2 ) != 0)
        {
            odd = odd * i;
         
          
        }
    }
    

    diff = even - odd;

     
    return diff;

      
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

   iret= FactorialDifference(iValue);
   printf("%d",iret);
}