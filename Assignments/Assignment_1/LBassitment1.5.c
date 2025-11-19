#include<stdio.h>

void Accept(int ino)
{
     int i = 0;
     for( i = 1; i <= ino ; i++)
     {
        printf("*\t");
     }
}
int main()
{
    int iVAlue = 0;
    iVAlue = 5;
    Accept(iVAlue);
    return 0;
}