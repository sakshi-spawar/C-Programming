#include<stdio.h>
int main()
{
    int u,a,t,v,s;

    printf("Enter the initial velocity: ");
    scanf("%d",&u);
    printf("Enter the acceleration: ");
    scanf("%d",&a);
    printf("Enter the time: ");
    scanf("%d",&t);

    v=u+a*t;
    printf("final velocity:%d",v);

    s=u+((a*t)*(a*t));
    printf("\nDistance travelled:%d",s);

}