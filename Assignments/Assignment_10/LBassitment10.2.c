////////////////////////////////////////////////////////////////////////
//  QUESTION : Write a program which accept width & height of rectangle 
//             from user and calculate its area. 
//             (Area = Width * Height)
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//    REQUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : double Rectarea(float width , float height)
//      DESCRIPTION    : This function accepts width and height of a 
//                        rectangle and returns its area.
//      INPUT          : width, height (floating-point values)
//      OUTPUT         : double (calculated area)
//      AUTHOR         : PRANAV MANOJ NARKHEDE
//      DATE           : 
////////////////////////////////////////////////////////////////////////
double Rectarea(float width , float height)
{
    double area = 0;
    area = width * height ;
    return area;
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////
int main()
{
    float  iValue1 = 0 , iValue2 = 0;
    double iret = 0; 

    printf("Enter width :");
    scanf("%f",&iValue1);

    printf("Enter height :");
    scanf("%f",&iValue2);

    iret = Rectarea(iValue1,iValue2);

    printf("Area of rectangle is : %lf",iret);

    return 0;
}
