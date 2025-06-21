#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter any character,digit or special symbols: ");
    scanf("%c",&ch);
    if(isalpha(ch))
        printf("Alphabate");
    else if(isdigit(ch))
        printf("Digit");
    else if(ispunct(ch))
        printf("Punctution");
    else
        printf("special symbol");

    return 0;
}