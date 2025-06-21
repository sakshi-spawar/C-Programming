#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character,digit or special symbols: ");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        printf("Alphabate");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("special symbol");

    return 0;
}