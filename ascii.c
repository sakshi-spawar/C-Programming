#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character,digit or special symbols: ");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        printf("Alphabate");
}