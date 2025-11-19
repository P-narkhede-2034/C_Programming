// 2) Print all even numbers up to N

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int i = 0;
    for (i = 0 ; i <= iNo ; i ++)
    {
        if (i % 2 == 0 )
    {
        printf("%d\t",i);
    }
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}