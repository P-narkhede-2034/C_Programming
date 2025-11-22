///////////////////////////////////////////////////////////////////////
//2. Accept number of rows and number of columns from user and display
  //below pattern.

//OUTPUT
/* 
Enter the rows
5
Enter the colums
5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
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
        char ch = 'a';
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2 )!= 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else 
            {
                    printf("%d\t", j);
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