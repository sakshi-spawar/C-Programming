#include<stdio.h>
int main()
{
    char ch;
    printf("Enter lower case alphabate: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u' )
            printf("Vowel");
        else
            printf("Not vowel");
    }
    else
        printf("Invalid input!!");
}