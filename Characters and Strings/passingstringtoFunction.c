/*

How to pass strings to a fucntion
*/

#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    char str2[10]="World";
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);            
    displayString(str);     // Passing string to a function. 
   displayString(str2);    
    return 0;
}
void displayString(char str[]) // str
{
    printf("\nString Output: ");
    puts(str);
}
