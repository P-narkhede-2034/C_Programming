//5. Write a program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>

float percentage(float ino1 ,float ino2)
{
    if (ino2 == 0)
    {
        printf("we cant divide by 0");
    }
      int per = 0;
      per = ino1 / ino2 * 100;
      return per;
}
int main()
{
    float partial_value = 0, total_value = 0;
    float  fret = 0.0f;

    printf("Enter the partial_value  :");
    scanf("%f",&partial_value);

    printf("Enter the   total_value :");
    scanf("%f",&total_value);

     fret = percentage(partial_value , total_value);
     printf("percentage is %f",fret);
    return 0;
}
