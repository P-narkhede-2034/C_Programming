// 4. Accept N numbers from user and display all such numbers which contains
// 3 digits in it.

#include <stdio.h>
#include <stdlib.h>

void Diffmixmin(int arr[], int ilength)
{
    int i = 0;
    int digit = 0;
    int no = 0;
    int count = 0;

    for(i = 0; i < ilength; i++)
    {
        no = arr[i];
        count = 0;   

        while(no != 0)
        {
            digit = no % 10;
            count++;
            no = no / 10;
        }

        if(count == 3)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the frequency \n");
    scanf("%d", &iSize);

    ptr = (int*) malloc(iSize * sizeof(int));

    printf("Enter the elements \n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d", &ptr[i]);
    }

    Diffmixmin(ptr, iSize);

    free(ptr);
    return 0;
}
