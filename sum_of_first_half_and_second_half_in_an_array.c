#include<stdio.h>
int main()
{
    int n,arr[100],i,sum1=0,sum2=0,e,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2)
    {
        e=(n-1)/2;
        d=n-e;
    }
    else
    {
        e=n/2;
        d=n-e;
    }
    for(i=0;i<e;i++)
    {
        sum1+=arr[i];
    }
    for(i=e;i<n;i++)
    {
        sum2+=arr[i];
    }
    printf("%d
%d",sum1,sum2);
}