//1. Write a program which accept name from user and print that name.
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter the name :");
    scanf("%s",&name);
    printf("your name is %s",name);
    return 0;
}