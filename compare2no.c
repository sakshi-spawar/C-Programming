#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&n1,&n2);

    if(n1>n2)
        printf("%d is greater than %d",n1,n2);
    else if(n1<n2)
        printf("%d is less than %d",n1,n2);
    else
        printf("%d and %d are equal",n1,n2);
}