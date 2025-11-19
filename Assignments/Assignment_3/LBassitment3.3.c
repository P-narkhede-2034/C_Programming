//3. Write a program which accept number fromuser and print even factors of that
#include<stdio.h>

void DisplayFactor(int ino)
{
    int i = 0;
    if( ino < 0)
    {
        ino = -ino;
    }
    
    for(i = 1 ; i <= ino/2; i++)
    {
        if(( i % 2 == 0) && (ino % i == 0))
        {
           printf("%d\n", i);
        } 
    }

           
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}

