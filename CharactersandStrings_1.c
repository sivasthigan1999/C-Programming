/*
how to declare strings and how to work with strings in C programming 

*/
#include <stdio.h>

int main() { 
 /*  char message[256]; // The length of char array shall be sufficient to hold the string plus the terminating null character '\0'Hello
   //message="Hello world";  // assignment is not possible with strings
   
   printf("\nEnter a message: ");
   scanf("%s", message);  //Do not place an & before the array variable, With integers--> scanf("%d", &int) 
   printf("The message is: %s\n", message);
      // Print up to but not including the terminating null character '\0'

   // print characters in a string
   int i;
   for (i = 0; message[i] != '\0'; ++i) {    
      printf("'%c' ", message[i]); 
   }
   printf("\n"); 
   //printf("%s \n", message[5]); //To print the null character
*/

 //using stdio.h
   char name[5];
    printf("Enter name: ");
    //gets(name); // read string
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string

    return 0;
      
}
