/*
 * Testing Explicit Type Cast (Average1to100.c).
 */
#include <stdio.h>
 
int main() {
   int sum = 0;
   double average;
   int number = 1;
   while (number <= 100) {
      sum += number;      // Final sum is int 5050
      ++number;
   }
   average = sum / 100;   // Won't work (average = 50.0 instead of 50.5)
   printf("Average is %lf\n", average);  // Average is 50.0
   return 0;
}