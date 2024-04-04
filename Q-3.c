#include <stdio.h>

int main()
{
  int third_angle;
  int first_angle;
  int second_angle; 
 int x;
 
 printf("enter first angle:");
 scanf("%d",&first_angle);
 printf("enter second angle:");
 scanf("%d",&second_angle);
 printf("third angle is:");
 x=first_angle+second_angle;
 third_angle=180-x;
 printf("%d",x);
    return 0;
}