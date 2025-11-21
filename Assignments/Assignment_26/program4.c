///////////////////////////////////////////////////////////////////////
//4. Accept number from user and display below pattern.

//OUTPUT 
//4
//#       1       *       #       2       *       #       3       *       #       4       *
///////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
//    REUIRED HEADER FILE 
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void display(int ino)
{
    int i = 0 , j = 0;
   for ( i = 1 ; i <= ino ; i++)
   {
       for(j = 1; j <= ino ; j++)
       {
        printf("#\t");
        break;
       }
       for(j = 2; j <= ino ; j++)
       {
        printf("%d\t",i);
        break;
       }
       for(j = 3; j <= ino ; j++)
       {
        printf("*\t");
        break;
       }
   }
    
}

////////////////////////////////////////////////////////////////////////
//  ENTRY POINT FUNCTION FOR THE APPLICATION
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter the frequency \n");
    scanf("%d",&iValue);

    display(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////
//      FUNCTION NAME  : void display(int ino)
//      DESCRIPTION    : DIPLAY PATTERN 
//      INPUT          : INT
//      OUPUT          : VOID
//      AUTHOR         : PRANAV MANOJ NARKHEDE
//      DATE           : 21/11/2025
///////////////////////////////////////////////////////////////////////