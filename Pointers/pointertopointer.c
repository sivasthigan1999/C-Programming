//example for pointer to pointer operations

#include <stdio.h>
int main () {

   int  var;
   int  *ptr;   //pointer
   int  **pptr;  //pointer to pointer

   var = 3000;

   /* take the address of var */
   ptr = &var;

   /* take the address of ptr using address of operator & */
   pptr = &ptr;

   /* take the value using pptr */
   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

   printf("Address of var = %p\n", &var );
   printf("Address available at ptr = %p\n", ptr );
   printf("Address of ptr = %p\n", &ptr );   //gives the address of ptr  not the address of var
   printf("Address inside pptr = %p\n", pptr);

   return 0;
}
