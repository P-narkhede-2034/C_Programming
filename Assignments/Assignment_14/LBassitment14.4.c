//4. Write a program which accept number from user and count frequency of 4 in it.


#include <stdio.h>
#include <stdbool.h>

void checkbool(int ino)
{
    int idigit = 0;
    int arr[100];  // array to store digits
    int i = 0; 
    int frequency = 0;    // index

    while (ino != 0)
    {
        idigit = ino % 10;   // extract last digit
        arr[i] = idigit;     // store in array
        ino = ino / 10;      // remove last digit
        i++;                 // move to next index
    }


 
    for (int j = 0; j < i; j++)
    {
        if (arr[j] == 4)
        {
            frequency++;
        }
    }
     
    printf("the no of 4 frequency is :%d",frequency);
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    checkbool(iValue);

    return 0;
}
