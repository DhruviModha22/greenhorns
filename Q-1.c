// Q-1. Write a program to convert temperature from degrees celsius to fahrenheit.
#include <stdio.h>

int main()
{
  float cel;
  float fah;
  float ans;
  printf("enter the degress:");
  scanf("%f",&cel);
 printf("Your temperature is:");
  fah=cel*1.8;
  ans=fah + 32;

  printf("%.2f",ans);
  
    return 0;
}