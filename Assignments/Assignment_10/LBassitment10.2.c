// 2. Write a program which accept width & height of rectangle from user and calculate
//its area. (Area = Width * Height)


#include<stdio.h>

double Rectarea(float width , float height)
{
   
    double area = 0;
    area = width * height ;
    return area;
}
int main()
{
    float  iValue1 = 0 , iValue2 = 0;
    double iret = 0; 

    printf("Enter width :");
    scanf("%f",&iValue1);

    printf("Enter height :");
    scanf("%f",&iValue2);

    iret = Rectarea(iValue1,iValue2);
    printf("area of reactangle is : %lf",iret);
    return 0;
}