// Q-2.write a c program to find gross salary by adding % of HRA, DA,and TA of user choice.
#include <stdio.h>

int main()
{
  int gross_salary;
  int salary=10000;
  int HRA =100;
  int DA=80;
  int TA=50;
  

  
 printf("Your gross salary is:\n");
 
 gross_salary=salary+HRA+DA+TA;

  printf("%d",gross_salary);
  
 

    return 0;
}
