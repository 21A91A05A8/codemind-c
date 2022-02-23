#include<stdio.h>
int main()
{
    int n,sum=0,d,k;
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        n/=10;
    }
    if(k%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}