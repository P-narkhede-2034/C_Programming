//1. Write a program which accept radius of circle from user and calculate its area.
//Consider value of PI as 3.14. (Area = PI * Radius * Radius)
#include<stdio.h>
double circlearea(float radius)
{
   double area = 0;
   area = 3.14 * radius * radius;
   return area;
      
}

int main()
{
    float  iValue = 0;
    double iret = 0;

    printf("Enter radius : ");
    scanf("%f", &iValue);

   iret= circlearea(iValue);
   printf("%lf",iret);
}
