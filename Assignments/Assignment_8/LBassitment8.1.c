//1. Write a program which accept number from user and if number is less than 50
//then print small , if it is greater than 50 and less than 100 then print medium, if it is
//greater than 100 then print large.

#include <stdio.h>

void Number(int ino)
{
    if(ino >= 100)
    {
        printf("greater");
    }
    
    else if (ino <= 50)
    {
        printf("smaller");
    }

    else if(ino >= 50 <= 100)
    {
        printf("medium");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Number(iValue);
    return 0;
}
// time coplxity O(3)