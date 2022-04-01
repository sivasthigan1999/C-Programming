/* Test Function (TestFunction.c) */
#include <stdio.h>
const int PI = 3.14159265;
 
// Function Prototype (Function Declaration)
double getArea(double radius); // formal parameters
 
int main() {
   double radius1 = 1.1, area1, area2;
   
   // call function getArea()
   area1 = getArea(radius1);  // actual parameters or arguments
   printf("area 1 is %.2lf\n", area1);

   area2=getArea(2.2);
   printf("area 2 is %.2lf\n", area2);

   printf("area 3 is %.2lf\n", getArea(3.3));

}
 
// Function Definition
// Return the area of a circle given its radius
double getArea(double radius) {  //formal parameter  
   return radius * radius * PI;
}