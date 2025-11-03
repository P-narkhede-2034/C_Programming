//4. Check Positive, Negative, orZero
#include<stdio.h>

void CheckPositiveNegativeZero(int ino)
{
   if(ino > 0)
   {
    printf("This is the positive no :   %d\n",ino);
   }
  
   else if(ino == 0)
   {
    printf("This is the Zero  no :   %d\n",ino);
   }

    else
   {
      printf("This is the negative  no :   %d\n",ino);
   }

  
            
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    CheckPositiveNegativeZero(iValue);
    return 0;
}

