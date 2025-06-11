#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n>0)
        printf("%d is positive number.",n);

    else
        printf("%d is negative number",n);

    // (n>0)?printf("%d is positive number",n):printf("%d negative number",n); //ternary operator

    return 0; 
}