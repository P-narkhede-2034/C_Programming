// 4. Accept N numbers from user and accept Range,
// Display all elements from that range

#include <stdio.h>
#include <stdlib.h>

void DisplayRange(int arr[], int ilength, int ino1, int ino2)
{
    int i = 0;

    for(i = 0; i < ilength; i++)
    {
        if(arr[i] >= ino1 && arr[i] <= ino2)
        {
            printf("%d ", arr[i]);   
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int start = 0;
    int end = 0;

    printf("Enter the frequency\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements\n");

    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter the first number\n");
    scanf("%d", &start);

    printf("Enter the second number\n");
    scanf("%d", &end);

    DisplayRange(ptr, iSize, start, end);

    return 0;
}
