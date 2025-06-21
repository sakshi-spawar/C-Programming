#include<stdio.h>
int main()
{
    int n1,n2;
    float am,hm;
    printf("Enter 2 Numbers:");
    scanf("%d%d",&n1,&n2);

    am=(n1+n2)/2;
    printf("Arithmetic mean:%.2f",am);

    hm=(n1*n2)/(n1+n2);
    printf("\nHarmonic mean:%.2f",hm);


}