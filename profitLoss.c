#include<stdio.h>
int main()
{
    int sp,cp,p,l;

    printf("Enter selling price:");
    scanf("%d",&sp);

    printf("Enter cost price:");
    scanf("%d",&cp);

    if(sp>cp)
    {
        p=sp-cp;
        printf("Seller had made profit of %d rupees",p);

    }
    else
    {
        l=cp-sp;
        printf("Seller had loss of %d rupees",l);
    }

}