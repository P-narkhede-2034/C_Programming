//S) Find sum of first N even numbers
#include<stdio.h>

int DisplayFactors(int iNo)
{
    int i = 0;
    int  j = 0;
    for (i = 0 ; i <= iNo ; i ++)
    {
        if (i % 2 == 0 )
    {
        j = j + i;
    }
    }
    return j;
}


int main()
{
    int iValue = 0, result = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

     result = DisplayFactors(iValue);
      printf(" the sum is %d",result);

    return 0;
}