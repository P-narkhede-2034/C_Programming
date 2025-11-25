///////////////////////////////////////////////////////////////////////
//2. Accept number of rows and number of columns from user and display
  //below pattern.

//OUTPUT
/* 
Enter the rows
5
Enter the colums
5
$       *       *       *       *       *
#       $       *       *       *       *
#       #       $       *       *       *
#       #       #       $       *       *
#       #       #       #       $       *
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
             for(j = 1; j <= iCol + 1 ; j++)
            {
                if  ( i > j )
                {
                    printf("#\t");
                }
                else if ( i >= j)
                {
                    printf("$\t");
                }
                else
                {
                    printf("*\t");
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
//      DATE           : 23/11/2025
///////////////////////////////////////////////////////////////////////