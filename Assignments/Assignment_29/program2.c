///////////////////////////////////////////////////////////////////////
//2. Accept number of rows and number of columns from user and display
  //below pattern.

//OUTPUT
/* 
Enter the rows
5
Enter the colums
5
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
*/  
///////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
//    REUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void display(int iRow , int iCol)
{  
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
         int evnum = 2;
         int odnum = 1;
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t", odnum );
                odnum = odnum + 2;
            } 
            else
            {
                printf("%d\t", evnum);
                 evnum = evnum + 2;;
            }  
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    
    printf("Enter the rows\n");
    scanf("%d",&iValue1);

    printf("Enter the colums\n");
    scanf("%d",&iValue2);

    display(iValue1,iValue2);
    return 0;
}

///////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : void display(int iRow , int iCol)
//      DESCRIPTION    : DIPLAY PATTERN 
//      INPUT          : iValue1,iValue2
//      OUPUT          : VOID
//      AUTHOR         : PRANAV MANOJ NARKHEDE
//      DATE           : 21/11/2025
///////////////////////////////////////////////////////////////////////