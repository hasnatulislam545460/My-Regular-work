#include <stdio.h>
int main()
 {
    char lower;
    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);
    /*ascii value te upper case er ascii numer lower case tekhe 32 pichone*/
    printf("The upper case letter: %c",lower-32);
    return 0;
 }
