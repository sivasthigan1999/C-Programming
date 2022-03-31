/*
Test pass by value
*/

#include <stdio.h>

//Function prototye
int inc(int number);

int main(){
    int n=8;
    printf("Before calling function, n is %d\n", n);

    int result=inc(n);
    printf("After calling function, n is %d\n", n);
    printf("result is %d\n", result);

}

int inc(int number){
    ++number;
    return number;
}

/////////////////////////////////////////////////////////////////////////////////

/* Function to increment each element of an array (IncrementArray.c) */
/*
#include <stdio.h>

// Function prototypes
void inc(int array[], int size);
void print(int array[], int size);

int main() {
int a1[] = {8, 4, 5, 3, 2};

// Before increment
print(a1, 5); // {8,4,5,3,2}

// Do increment
inc(a1, 5); // Array is passed by reference (having side effect)

// After increment
print(a1, 5); // {9,5,6,4,3}
}

// Increment each element of the given array
void inc(int array[], int size) { 
int i;
for (i = 0; i < size; ++i) {
array[i]++; 
}
}

// Print the contents of the given array
void print(int array[], int size) {
int i;
printf("{");
for (i = 0; i < size; ++i) {
printf("%d", array[i]);
if (i < size - 1) {
printf(",");
}
}
printf("}\n");
}
*/