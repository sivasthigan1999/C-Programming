/*
Bitwise Operators
Date: 22/11/2021
Author:SE


& - AND // 11, 10 --> 10
| - OR // 11, 10 --> 11
^ - XOR // 11, 10 --> 01
~ - Bitwise complement //11 --> 00 , 10 -->01
>> - Shift right //10011>>2 --> 00100
<< - Shift Left // 10011<<2 --> 01100

*/

#include<stdio.h>

int main() {
unsigned int a=60; // 60 = 0011 1100 
unsigned int b=13; // 13 = 0000 1101
int c=0;

c = a & b;
printf("Value of c is %d\n", c ); // 00001100

c = a | b;
printf("Value of c is %d\n", c ); // 00111101

c = a ^ b;
printf("Value of c is %d\n", c );

c = ~a;
printf("Value of c is %d\n", c ); 

c = a << 2;
printf("Value of c is %d\n", c ); 

c = a >> 2;
printf("Value of c is %d\n", c );


}


