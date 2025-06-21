#include<stdio.h>
int main()
{
  int r,h;
  float pi = 3.14,area,vol;

    printf("Enter the radius of cylinder: ");
    scanf("%d",&r);

    printf("Enter the height of cylinder: ");
    scanf("%d",&h);

    area=(2*pi*r*r)+(2*pi*r*h);
    printf("The Surface area of cylinder is: %.2f",area);

    vol=pi*r*r*h;
    printf("\nThe Volume of cylinder is: %.2f",vol);





}