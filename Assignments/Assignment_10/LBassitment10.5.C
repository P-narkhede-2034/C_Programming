//5. Write a program which accept area in square feet and convert it into square
//meter. (1 square feet = 0.0929 Square meter)

#include<stdio.h>

double  Squaremeter(int ino)
{
     double meter = 0;
     meter = ino * 0.0929;
     return meter;
}
int main()
{
    int  iValue1 = 0 ;
    double iret = 0.0; 

    printf("Enter kilomeater:");
    scanf("%d",&iValue1);

    iret = Squaremeter(iValue1);
    printf("area of reactangle is : %lf",iret);
    return 0;
}