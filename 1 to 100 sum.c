// 1 to 100 sum
#include <stdio.h>

int main()
{
    int i,n,sum=0;
    //scanf("%d",&n);
    for(i=1;i<=100;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
