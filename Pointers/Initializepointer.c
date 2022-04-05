/*
Pointer: Declration and intitalization
*/

#include <stdio.h>
int main()
{
   int a=10;    //variable declaration
   int *p;      //pointer variable declaration
   p=&a;        //store address of variable a in pointer p
   printf("Address stored in variable p is:%p\n",p);  //accessing the address
   printf("Value stored in variable p is:%d\n",*p);   //accessing the value
   return 0;
}
