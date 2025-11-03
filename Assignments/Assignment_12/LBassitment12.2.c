//2) Count total factors of a number
#include<stdio.h>

int CountFactor( int ino)
{
     int iCnt = 0; 
     int  iFrequency = 0;

     if(ino < 0)
     {
        ino = -ino;
     }

     for (iCnt = 1; iCnt<=(ino / 2); iCnt ++)
     {
         if((ino % iCnt ) == 0)
         {
            iFrequency ++;
         }
     }
    
     return iFrequency;
}

int main()
{
    int iValue  = 0 , iRet = 0;

    printf("Enter the no :");
    scanf("%d",&iValue);

    iRet = CountFactor(iValue);
    printf("NO of factors are : %d\n",iRet);

    return 0;
}