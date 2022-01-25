/*
 break and continue
*/
#include <stdio.h>
#include <math.h>

//Use of break

//int main() {
/*
List non-prime from 1 to an upperbound (use of break).
 */
 /*int upperbound, number, maxFactor, factor;
   printf("Enter the upperbound: ");
   scanf("%d", &upperbound);
   for (number = 2; number <= upperbound; ++number) {
      // Not a prime, if there is a factor between 2 and sqrt(number)
      maxFactor = (int)sqrt(number);
      for (factor = 2; factor <= maxFactor; ++factor) {
         if (number % factor == 0) {   // Factor?
            printf("%d ", number);
            break;   // A factor found, no need to search for more factors
         }
      }
   }
   printf("\n");

   return 0;
} 

*//*
 *  List non-primes from 1 to an upperbound (use of while).
 */

int main() {
   int upperbound, number, maxFactor, isPrime, factor;
   printf("Enter the upperbound: ");
   scanf("%d", &upperbound);
 
   for (number = 2; number <= upperbound; ++number) {
      // Not prime, if there is a factor between 2 and sqrt of number
      maxFactor = (int)sqrt(number);
      isPrime = 1;
      factor = 2;
      while (isPrime && factor <= maxFactor) {
         if (number % factor == 0) {   // Factor of number?
             isPrime = 0;
         }
         ++factor;
      }
      if (isPrime) printf("%d ", number);
   }
   printf("\n");
   return 0;
}

