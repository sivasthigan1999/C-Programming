/*
 Conditional (Decision) Flow Control 
     if-then, if-then-else, nested-if (if-elseif-elseif-...-else), switch-case, and conditional expression
*/
#include <stdio.h>

int main(){
   
    int x = 26;
    int y = 22;

    //if-then
    if (x<y){
        printf("Variable x is less than y\n"); 
    }

    //if-then-else
    if (x<y){
        printf("Variable x is less than y\n");
    }else{
        printf("Variable x is greater than y\n");
    }

    //if-elseif-elseif-...-else
    if (x<y){
        printf("Variable x is less than y\n");
    }else if (x==y){
        printf("Variable x is equal to  y\n");
    }else{    
        printf("Variable x is greater than y\n");
    }

    //switch-case
    int i=3;
    switch (i){
        case 1:  /* constant-expression */
        printf("Case 1\n");
        break;

        case 2:  /* constant-expression */
        printf("Case 2\n");
        break;    

        default:
        printf("Invalid Case\n");
        break;
    }
    
    //conditional expression
    int mark=60;
    printf("%s\n", (mark >= 50) ? "PASS" : "FAIL");
    return 0;
}
