/*

Traverse arrays with pointers
*/

#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};   //array initialization
	int i;

/*	for(i=0;i<5;++i){
		printf("&a[%d] = %p\n", i , &a[i]);
	}

	printf("Address of array a: %p\n", a);
	

*/

    int *p;    //pointer declaration
               //the ptr points to the first element of the array

    p=a; //We can also simply type ptr==&a[0] 
  
    printf("Printing the array elements using pointer\n");
   for(int i=0;i<5;i++)    //loop for traversing array elements
    {
        	printf("%x\n",*p);  //printing array elements
        	p++;    //incrementing to the next element, you can also write p=p+1
    } 

    return 0;
}
