
//4.Write a program which accept number from user and return summation of all its
//non factors.
#include<stdio.h>

int DisplayNonFactor(int ino)
{
    int i = 0;
    int isum = 0;
    if( ino < 0)
    {
        ino = -ino;
    }
    
    for(i = 1 ; i <= ino; i++)
    {
       
            if((ino % i) != 0)
            {
               isum = isum + i;
            }
        
    }
    return isum;

           
}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

     iret = DisplayNonFactor(iValue);
     printf("Addition of non factor is %d", iret);
    return 0;
}



