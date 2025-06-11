#include<stdio.h>
int main()
{
    int amt;
    printf("Enter a amount:");
    scanf("%d",&amt);

    printf("10 * %d=%d\n",amt/10,10*(amt/10));
    amt=amt%10;

    printf("5 * %d=%d\n",amt/5,5*(amt/5));
    amt=amt%5;

    printf("1 * %d=%d",amt/1,1*(amt/1));


}