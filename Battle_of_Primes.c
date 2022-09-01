#include<stdio.h>
int isprime(int r)
{
    int i;
    for(i=2;i<r;i++)
    {
        if(r%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,n2,n,k,i;
    scanf("%d",&n1);
    scanf("%d",&n2);
    n=n1+n2;
    for(i=1;i<100;i++)
    {
        k=n+i;
        if(isprime(k))
        {
            printf("%d",i);
            break;
        }
    }
}