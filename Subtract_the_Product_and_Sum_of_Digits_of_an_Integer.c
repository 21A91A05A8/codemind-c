#include<stdio.h>
int main()
{
    int n,d,sum=0,mul=1,diff;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        sum+=d;
        mul=mul*d;
    }
    diff=mul-sum;
    printf("%d",diff);
}