#include <stdio.h>

int main() 
{
    int a,b,d,c,r;
    float f;
    scanf("%d%d",&a,&b);
    d=a/b;
    r=a%b;
    f=(1.0*a/b);
    printf("%d %d %.5f",d,r,f);
    return 0;

}3