//3. Write a program which accept distance in kilometre and convert it into meter. (1
//kilometre = 1000 Meter)

#include<stdio.h>

int  Rectarea(int ino)
{
     int meter = 0;
     meter = ino * 1000;
     return meter;
}
int main()
{
    int  iValue1 = 0 ,iret = 0; 

    printf("Enter kilomeater:");
    scanf("%d",&iValue1);

    iret = Rectarea(iValue1);
    printf("area of reactangle is : %d",iret);
    return 0;
}