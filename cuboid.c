#include<stdio.h>
int main()
{
    int l,b,h;
    float area,vol;
    printf("Enter length of cuboid: ");
    scanf("%d",&l);
    printf("Enter breadth of cuboid: ");
    scanf("%d",&b);
    printf("Enter height of cuboid: ");
    scanf("%d",&h);

    area=2*((l*b)+(l*h)+(b*h));
    printf("The Surface area of cuboid is %.2f",area);

    vol=l*b*h;
    printf("\nThe Volume of cuboid is %.2f",vol);
}