#include<stdio.h>
int factors(int m)
{
    int i,d=0;
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            d+=1;
        }
    }
    if(d==7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(factors(i))
        {
            printf("%d ",i);
            c+=1;
        }
    }
    printf("
Total=%d",c);
}