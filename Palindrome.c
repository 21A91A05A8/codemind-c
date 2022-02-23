#include<stdio.h>
int main()
{
    int d,n,sum=0,k;
    scanf("%d",&n);
    k=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        sum=sum*10+d;
    }
    if(sum==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}