/*
 strings with pointers
 */

#include <stdio.h>

int main(void) {
  char name[] = "Harry Potter";

  printf("%c \t", *name);     // Output: H
  printf("%c \t", *(name+1));   // Output: a
  printf("%c  \t \n", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;  //namePtr will contains the address of array name (address of frist element)
  printf("%c \n", *namePtr);     // Output: H
  printf("%c \n", *(namePtr+1));   // Output: a
  printf("%c \n", *(namePtr+7));   // Output: o
}
