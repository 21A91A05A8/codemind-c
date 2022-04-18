#include<stdio.h>
int main()
{
    int n,d,k,sum=0;
    scanf("%d",&n);
    k=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        sum=sum*10+d;
    }
    printf("%d",sum);
}