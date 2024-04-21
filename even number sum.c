#include<stdio.h>
int main()
{
    int i,sum=0;
    //scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
