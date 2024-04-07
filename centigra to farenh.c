// F=(C*1.8)+32....celcius to faren..
#include<stdio.h>
int main()
{
    float c,F;
    printf("Enter Centigrade: ");
    scanf("%f",&c);
    F=(c*1.8)+32;
    printf("Farenheit: %.2f\n",F);
    return 0;
}
