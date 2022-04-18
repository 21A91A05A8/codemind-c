#include<stdio.h>
int main()
{
    int t,a,b,sum=0;
    scanf("%d",&t);
    for(;t>0;--t)
    {
        scanf("%d%d",&a,&b);
        sum+=a+b;
        printf("%d
",sum);
        sum=0;
    }
}