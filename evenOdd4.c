#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2!=0)
        printf("odd number");
    else
        printf("even number");

        return 0;
}