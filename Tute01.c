/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
//function main
int main() 
{//variables declaring
  int mark1,mark2;
  float total,avg;
  
  printf("input mark 1 :");
  scanf("%d",&mark1);
 
  printf("input mark 2 :");
  scanf("%d",&mark2);
 
  total = mark1 + mark2;
  avg = total / 2.0;
  
  printf("\nTotal of marks :%.2f\n",total);
  printf("Average of marks :%.2f",avg);
  return 0;//end of function main
}

