#include<stdio.h>

int main()
{
   float f, cel;
  
   printf("Enter temperature in Fahrenheit: ");
   scanf("%f",&f);

   cel = (f-32)*5/9;

   printf("Temperature in Celsius: %f ",cel);
   
   return 0;
}