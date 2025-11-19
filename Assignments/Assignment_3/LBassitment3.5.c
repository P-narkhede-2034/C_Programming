
//5. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
#include <stdio.h>
#include<ctype.h>
#include <stdbool.h>

bool ChkVowel( char cno)
{
    
    if(islower(cno))
    {
        char arr[]= {'a', 'e', 'i', 'o','u'};
        int i = 0;
        while(i <= 5)
        {
            if (arr[i] == cno)
            {
                return true;
            }
            i++;
        }
    }
    else
    {
        return false;
    }
      
}
int main()
{
    char  cValue = 0;
    char bRet = 0;


    printf("Enter character :");
    scanf("%c",&cValue);

      bRet = ChkVowel(cValue);
      
      if(bRet == true)
      {
        printf("That is vowel");
      }
      else
      {
        printf("that is not vowel");
      }
    return 0;
}

