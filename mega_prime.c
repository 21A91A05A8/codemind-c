#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,k,f=0,c=0,e=0,d;
    scanf("%d",&n);
    k=n;
    if(prime(n))
    {
        while(n)
        {
            d=n%10;
            if(d==0 || d==1)
            {
                c+=1;
                n=n/10;
                continue;
            }
            c+=1;
            if(prime(d))
            {
                e+=1;
            }
            n=n/10;
        }
        if(c==e)
        {
            f=1;
        }
    }
    if(f==1)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}