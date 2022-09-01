#include<stdio.h>
int notprime(int m)
{
    int i;
    if(m==1)
    {
        return 1;
    }
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(notprime(i))
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}