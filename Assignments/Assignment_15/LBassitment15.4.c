// 4. Write a program which accept number from user and return multiplication of all
//digits.

#include <stdio.h>
#include <stdbool.h>

void checkbool(int ino)
{
    int idigit = 0;
    int i = 0; 
    int total = 1;    // index

    while (ino != 0)
    {
        idigit = ino % 10;   // extract last digit
        total = total *idigit;    // store in array
        ino = ino / 10;      // remove last digit
    }


 
     
    printf("total no of multiplcation :%d",total);
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    checkbool(iValue);

    return 0;
}
