/* 
	char variables

	ctype - char library

*/


/*
#include <stdio.h>
#include <ctype.h>

int main(){
	char input;
	
	scanf("%c",&input);

	if(isupper(input)){
		printf("CAPITAL\n");
	}else if (islower(input)){
		printf("simple\n");
	}else{
		printf("not an alphabet\n");
	} 

    
	if((input >= 'A') && (input <= 'Z')){   //if(isupper(input)){
		printf("CAPITAL\n");
		printf("the simple equi. is %c\n", tolower(input));
	}else if ((input >= 'a') && (input <= 'z')){ //if (islower(input)){
		printf("simple\n");
		printf("the CAP. equi. is %c\n", toupper(input));
	}else{
		printf("not an alphabet\n");
	}	

*/


    //string conversion
#include <stdlib.h>
#include <stdio.h>
    
int main(void){
        int i;
        char *s;
    
        s = " -9885";
        i = atoi(s);     // i = -9885 
    
        printf("i = %d\n",i);


	return 0;
}
