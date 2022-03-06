/* Test Arithmetic Overflow/Underflow (TestOverflow.c) */
#include <stdio.h>
#include <limits.h> 
void f(signed int si_a, signed int si_b);

int main() {
   // Range of int is [-2147483648, 2147483647]
   int i1 = 2147483647;      // max int
   printf("%d\n", i1 + 1);   // -2147483648 (overflow)
   printf("%d\n", i1 + 2);   // -2147483647
   printf("%d\n", i1 * i1);  // 1
 
   int i2 = -2147483648;     // min int
   printf("%d\n", i2 - 1);   // 2147483647 (underflow)
   printf("%d\n", i2 - 2);   // 2147483646
   printf("%d\n", i2 * i2);  // 0
   
   getchar();
   f(i1,i1);
   return 0;
}


void f(signed int si_a, signed int si_b) {
  signed int sum;
  if (((si_b > 0) && (si_a > (INT_MAX - si_b))) ||
      ((si_b < 0) && (si_a < (INT_MIN - si_b)))) {
   	printf("Handle error here");
  } else {
    sum = si_a + si_b;
  }
  
}
/**/