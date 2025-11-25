//5. Find Largest Among Three Numbers

#include <stdio.h>
int FindLargest(int ino1 , int ino2, int ino3)
{
    int largest = 0;
    if(( ino1 >= ino2) && (ino1 >= ino3))
    {
        largest = ino1;
    }
   
    else if((ino2 >= ino1) && (ino2 >= ino3))
    {
       largest = ino2;
    }
    else 
    {
        largest = ino3;
    }
  
    return largest;
       
}
int main()
{
    int a , b , c , result;

    printf("enter number :");
    scanf("%d %d %d",&a, &b, &c);
    result = FindLargest(a,b,c);
    printf("That is largest value among three :%d", result);
    return 0;
}