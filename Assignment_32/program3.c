///////////////////////////////////////////////////////////////////////
//3. Accept number of rows and number of columns from user and display
  //below pattern.

//OUTPUT
/* 
Enter the rows
4
Enter the colums
4
*       *       *       #
*               #       *
*       #               *
#       *       *       *
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
             for(j = 1; j <= iCol  ; j++)
            {
               if ( j == iCol+1  - i  )
               {
                printf("#\t");
               }
               else if(i == 1 || i == iRow || j == 1 || j == iCol )
               {
                printf("*\t");
               }
               else
               {
                printf("\t");
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
//      DATE           : 25/11/2025
///////////////////////////////////////////////////////////////////////