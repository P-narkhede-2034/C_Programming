//4. Write a program which accept temperature in Fahrenheit and convert it into
//celsius. (1 celsius = (Fahrenheit -32) * (5/9))


#include<stdio.h>

double  FhToCh(int ino)
{
     double celsius ;
     celsius = (ino - 32 ) * 5.0/9.0;
     return celsius;
}
int main()
{
    int  iValue1 = 0 ;
    // double iret = 0.0; 

    printf("Enter temp in fahrenheit:");
    scanf("%d",&iValue1);

    double iret = FhToCh(iValue1);
    printf("area of reactangle is : %lf",iret);
    return 0;
}