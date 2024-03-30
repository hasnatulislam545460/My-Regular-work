#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter 3 value: ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));/*ekanee sqrt eta dhara root k bujano hoyece*/
    printf("The are is: %.2f",area);
    return 0;

}
