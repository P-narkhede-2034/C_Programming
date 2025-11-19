#include <stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if(( iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iVAlue = 0;
    bool bRet = false;

    printf("Enter the Number :");
    scanf("%d",&iVAlue);

    bRet = Check(iVAlue);

    if (bRet == true)
    {
        printf("Dividible by 5");
    } 
    else
    {
        printf("NOt Divisible by 5");
    }
    return 0;
}