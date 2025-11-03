// 1. Write a program which accept number from user and display below pattern.
#include <stdio.h>

void Display(int ino)
{
    int i = 0 , j = 0; 
for (i = 1; i <= ino; i++) {
        printf("*\t");
}
for (i = 1; i <= ino; i++) {
        printf("#\t");
        }
      
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}