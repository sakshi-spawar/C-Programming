#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three numbers");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
        b=a;
    else if(c>b)
        b=c;
    
    printf("Max number is %d",b);
}