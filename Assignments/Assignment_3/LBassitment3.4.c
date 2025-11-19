
//4. Accept one character from user and convert case of that character.
#include <stdio.h>
#include <ctype.h>

void Displayconvert( char cno)
{
    
    if (  islower(cno))
    {
         char uppercase = 0 ;
         uppercase = toupper(cno);
         printf("%c",uppercase);
    }
    else if( isupper(cno))
    {
         char lowercase = 0 ;
        lowercase = tolower(cno);
         printf("%c",lowercase);
    }
           
}
int main()
{
    int cValue = 0;

    printf("Enter character :");
    scanf("%c",&cValue);

    Displayconvert(cValue);
    return 0;
}

