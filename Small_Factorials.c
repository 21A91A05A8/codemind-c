#include<stdio.h>
int main()
{
    int n,i,t,fac=1;
    scanf("%d",&t);
    for(;t>0;--t)
    {
        scanf("%d",&n);//3
        for(i=n;i>0;i--)//3 2 1
        {
            fac=fac*i;//6
        }
        printf("%d
",fac);
        fac=1;
    }
}