#include<stdio.h>
#include<ctype.h>
int main()
{
    char v;
    printf("Enter Alphabate:");
    scanf("%c",&v);

    v=tolower(v);
switch (v)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    
    printf("vowel");
           break;

    default:printf("Not Vowel");
        break;
}
}