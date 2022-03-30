/*
 *  Print square pattern
 */
#include <stdio.h>
 
int main() {
   int size = 8, row, col;
   for (row = 1; row <= size; ++row) {     // Outer loop to print all the rows
      for (col = 1; col <= (size+1)-row; ++col) {  // Inner loop to print all the columns of each row
         printf("# ");
      }
      printf("\n");   // A row ended, bring the cursor to the next line
   }
 
   return 0;
}
