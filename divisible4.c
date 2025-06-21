#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n%5==0)
    {
        printf("Number is divisible by 5 ");
    }
    else if(n%7==0)
    {
        printf("Number is divisible by 7");

    }
    else{
        printf("Number is not divisible by 5 or 7");

    }
    
    
}