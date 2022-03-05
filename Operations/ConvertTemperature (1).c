/*
 * Converting between Celsius and Fahrenheit (ConvertTemperature.c)
 *   Celsius = (5/9)(FahrenheitɃ32)
 *   Fahrenheit = (9/5)Celsius+32
 */
#include <stdio.h>
 
int main() {
   double celsius, fahrenheit;
 
   printf("Enter the temperature in celsius: ");
   scanf("%lf", &celsius);
   fahrenheit = celsius * 9 / 5 + 32;
   // 9/5*celsius + 32 gives wrong answer! Why?
   printf("%.2lf degree C is %.2lf degree F\n", celsius, fahrenheit);
 
   printf("Enter the temperature in fahrenheit: ");
   scanf("%lf", &fahrenheit);
   celsius =  (fahrenheit - 32) * 5 / 9;
   // 5/9*(fahrenheit - 32) gives wrong answer! Why?
   printf("%.2lf degree F is %.2lf degree C\n", fahrenheit, celsius);
   return 0;
}