#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,k,l,d;
    scanf("%d",&n);
    k=n;
    l=pow(n,2);
    while(l>0)
    {
        d=l%10;
        sum+=d;
        l=l/10;
    }
    if(k==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}