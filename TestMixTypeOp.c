/* Testing mix-type arithmetic operations (TestMixTypeOp.c) */
#include <stdio.h>
 
int main() {
   int i1 = 2, i2 = 4;
   double d1 = 2.5, d2 = 5.2;
 
   printf("%d + %d = %d\n", i1, i2, i1+i2);          // 2 + 4 = 6
   printf("%.1lf + %.1lf = %.1lf\n", d1, d2, d1+d2); // 2.5 + 5.2 = 7.7
   printf("%d + %.1lf = %.1lf\n", i1, d2, i1+d2);    // 2 + 5.2 = 7.2  <== mix type
 
   printf("%d / %d = %d\n", i1, i2, i1/i2);          // 2 / 4 = 0  <== NOTE: truncate
   printf("%.1lf / %.1lf = %.2lf\n", d1, d2, d1/d2); // 2.5 / 5.2 = 0.48
   printf("%d / %.1lf = %.2lf\n", i1, d2, i1/d2);    // 2 / 5.2 = 0.38  <== mix type
   getchar();
   return 0;
}