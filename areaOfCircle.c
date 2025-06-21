#include <stdio.h>

int main() 
{
  int r;
  float pi = 3.14,area;

    printf("Enter the radius of circle: ");
    scanf("%d",&r);

  
  area = pi*r*r;
  printf("The Area of circle is: %f",area);

  
  return 0;
}