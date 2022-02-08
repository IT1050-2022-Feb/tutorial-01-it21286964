/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float m1, m2, avg;
   
   printf("Enter the mark 1: ");
   scanf("%f", &m1);
   printf("Enter the mark 2: ");
   scanf("%f", &m2);
   
   avg = (m1+m2)/2.00;
   
   printf("\nAverage is: %.2f", avg);
  
  return 0;
}

