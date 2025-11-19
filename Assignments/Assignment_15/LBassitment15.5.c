//5. Write a program which accept number from user and return difference between
//summation of even digits and summation of odd digits.

#include <stdio.h>
#include <stdbool.h>

void checkbool(int ino)
{
    int idigit = 0;
    int arr[100];  // array to store digits
    int i = 0; 
    int  total = 0;
    int ieven = 0;
    int iodd = 0;    // index

    while (ino != 0)
    {
        idigit = ino % 10;   // extract last digit
        arr[i] = idigit;     // store in array
        ino = ino / 10;      // remove last digit
        i++;                 // move to next index
    }


 
    for (int j = 0; j < i; j++)
    {
        if (arr[j] % 2 == 0)
        {
            ieven = ieven + j;
        }
        else
        {
            iodd = iodd + j;
        }
    }
     total = ieven - iodd;

    printf("difference  :%d",total);
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    checkbool(iValue);

    return 0;
}
