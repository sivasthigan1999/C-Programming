/* Test on increment (++) and decrement (--) Operator (TestIncDec.c) */
#include <stdio.h>
 
int main() {
   int mark = 76;        // declare & assign
   printf("%d\n", mark); // 76
 
   mark++;               // increase by 1 (post-increment)
   printf("%d\n", mark); // 77
 
   ++mark;               // increase by 1 (pre-increment)
   printf("%d\n", mark); // 78
 
   mark = mark + 1;      // also increase by 1 (or mark += 1)
   printf("%d\n", mark); // 79
 
   mark--;               // decrease by 1 (post-decrement)
   printf("%d\n", mark); // 78
 
   --mark;               // decrease by 1 (pre-decrement)
   printf("%d\n", mark); // 77
 
   mark = mark - 1;      // also decrease by 1 (or mark -= 1)
   printf("%d\n", mark); // 76
   
   getchar();  //add a system pause
	int x;
	x = 5;
	printf("%d\n", x++);  // Save x (5); Increment x (=6); Print old x (5).
	x = 5;
	printf("%d\n", ++x);  // Increment x (=6); Print x (6).
	// This is confusing! Try to avoid! What is i=++i? What is i=i++?
	
	
	
	int a, b;
	x = 42;
        a = ++x; // a and x are 43 
		printf("%d\n", a);
        b = x++; // b is 43, x is 44
		printf("%d\n", b);		
        a = x--; // a is is 44, x is 43 
		printf("%d\n", a);
        b = --x; // b and x are 42 
		printf("%d\n", b);
	
		printf("%d\n", a);
	
   return 0;
}