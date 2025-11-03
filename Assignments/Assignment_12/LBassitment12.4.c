//4) Sum of even factors (exclude the number itself)

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    int j = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if(iCnt % 2 == 0)
            {
                j = j + iCnt;
            }
            
        }   
    }
    printf("%d",j);
}

 // Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}