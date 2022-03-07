#include<stdio.h>
int main()
{
    int n,t,d,k,sum=0;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        k=n;
        while(n>0)
        {
            d=n%10;
            n=n/10;
            sum=sum*10+d;
        }
        if(sum==k)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        sum=0;
    }
}