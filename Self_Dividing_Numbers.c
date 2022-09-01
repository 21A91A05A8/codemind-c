#include<stdio.h>
int selfdiving(int m)
{
    int k,d,c=0,e=0;
    k=m;
    while(m)
    {
        d=m%10;
        c+=1;
        if(d==0)
        {
            m=m/10;
            continue;
        }
        if(k%d==0)
        {
            e+=1;
        }
        m=m/10;
    }
    if(c==e)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(selfdiving(i))
        {
            printf("%d ",i);
        }
    }
}