/*
 * Test Boolean function (BooleanfunctionTest.c).
 */
#include <stdio.h>


// Function Prototype
int isOdd(int);
 
int main() {
   printf("%d\n", isOdd(5));  // 1 (true)
   printf("%d\n", isOdd(6));  // 0 (false)
   printf("%d\n", isOdd(-5)); // 0 (false)
}
 
int isOdd(int number) {
   if (number % 2 == 1) {
      return 1;
   } else {
      return 0;
   }
}