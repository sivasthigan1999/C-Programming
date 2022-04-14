/*

The strlen() function takes a string as an argument 
and returns its length. The returned value is of type size_t (the unsigned integer type).

*/
/*
#include <stdio.h>
#include <string.h>   // string.h
/*
// strlen()   vs sizeof:gives array
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));

    return 0;
}
*/

  // strcpy() strncpy()
/*
int main() {
   char str1[20] = "C programming";
   char str2[20];

   // copying str1 to str2
   strcpy(str2, str1);
   putchar('\n');
   puts(str2); // C programming

   putchar('\n'); 
   char str3[20];
   strncpy(str3, str1,6);  // C prog
   puts(str3);
   return 0;
}

*/

//  strcat() strncat()  
/*
#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "This is ", str2[] = "programiz.com";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, str2);

   puts(str1);
   puts(str2);

   putchar('\n');
   char str3[10]="Hello";
   strncat (str3,str2,4);
   puts(str3);

   return 0;
}
*/



//strcmp()  : The strcmp() function compares two strings and 
//returns 0 if both strings are identical.
//negative if the ASCII value of the first unmatched character is less than the second.
//positive if the ASCII value of the first unmatched character is greater than the second.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";  //differs from 32 elements it ASCII table
    int result;

    // comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    char str4[] = "abzd";
    result = strcmp(str1, str4);
    printf("strcmp(str1, str4) = %d\n", result);

    return 0;
}


