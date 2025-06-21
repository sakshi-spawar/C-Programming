#include<stdio.h>
int main()
{
    int h,m,s;

    printf("Enter hours");
    scanf("%d",h);

    printf("Enter minutes");
    scanf("%d",m);

    printf("Enter seconds");
    scanf("%d",h);

    if(h>=0 && h<24)
    {
        if (m>=0 && m<60)
        {
            if (s>=0 && s<60)
                printf("Time is valid");
            else
                printf("second is invalid");
        }
        else
            printf("minutes are invalid");
    }
    else
        printf("hours are invalid");
}