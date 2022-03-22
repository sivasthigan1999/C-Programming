/*
 Loop Flow Control
 for-loop, while-do, and do-while.
*/
#include <stdio.h>

int main(){

int sum = 0, number;
//for loop
// Sum from 1 to 1000
for (number = 1; number <= 1000; ++number) {
   sum += number;
}
printf("Sum is equal to %d\n",sum);


//while-do
sum = 0; number = 1;
while (number <= 1000) {   //while-do
   sum += number;
   ++number;
}
printf("Sum is equal to %d\n",sum);

//do-while
sum = 0; number = 1;
do {
   sum += number;
   ++number;
} while (number <= 1000);
printf("Sum is equal to %d\n",sum);

    return 0;
}
