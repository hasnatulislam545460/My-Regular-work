#include<stdio.h>
#include<ctype.h>
int main()
{
    char lower,upper;
    printf("Enter the lowercase letter: ");
    scanf("%c",&lower);
    /*toupper ei library function dia uppercase k lowercase a convert kora jai*/
    upper=toupper(lower);
    printf("Uppercase letter: %c",upper);
    return 0;
}
