/*
 * Test implicit type casting (TestImplicitTypeCast.c)
 */
#include <stdio.h>
 
int main() {
   int i;
   double d;
 
   i = 3;
   d = i;    // Assign an int value to double
   printf("d = %lf\n", d);  // d = 3.0
	getchar();
   d = 5.5;
   i = d;    // Assign a double value to int
   printf("i = %d\n", i);  // i = 5 (truncated, no warning!)
	getchar();
   i = 6.6;  // Assign a double literal to int
   printf("i = %d\n", i);  // i = 6 (truncated, no warning!)
}