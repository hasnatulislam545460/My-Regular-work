#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,X1,X2;

    printf("Enter a = ");
    scanf("%f",&a);
    printf("Enter b= ");
    scanf("%f",&b);
    printf("Enter c= ");
    scanf("%f",&c);

    d=sqrt(b*b-4*a*c);

    X1=(-b+d)/(2*a);
    X2=(-b-d)/(2*a);

    printf("X1 = %f\n",X1);
    printf("X2 = %f\n",X2);
    return 0;

}
