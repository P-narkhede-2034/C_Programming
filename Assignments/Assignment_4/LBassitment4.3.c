
//3.Write a program which accept number from user and display all its non factors.
#include<stdio.h>

void DisplayNonFactor(int ino)
{
    int i = 0;
    if( ino < 0)
    {
        ino = -ino;
    }
    
    for(i = 1 ; i <= ino; i++)
    {
       
            if((ino % i) != 0)
            {
                printf("%d\n",i);
            }
        
    }

           
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    DisplayNonFactor(iValue);
    return 0;
}



