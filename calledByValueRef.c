/* Called by value vs Called by reference */

#include <stdio.h>

void add_one_called_by_value(int);
void add_one_called_by_ref(int *);

int main(){

int i = 1;

add_one_called_by_value(i);
printf("Value %d\n", i);

add_one_called_by_ref (&i);
printf("Value %d\n", i);

return 0;

}

void add_one_called_by_value(int j){
j++;
}

void add_one_called_by_ref(int *j){
(*j)++;
}
