#include<stdio.h>
#include<ctype.h>
int main()
{
    char lower,upper;
    printf("Enter any uppercase letter: ");
    scanf("%c",&upper);
    /*tolower ei library function dia lowercase k uppercase a convert kora jai*/
    lower=tolower(upper);
    printf("lowercase letter: %c",lower);
    return 0;
}
