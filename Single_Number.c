#include<stdio.h>
int main()
{
    int x[1000],i,n,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]==x[j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("%d",x[i]);
        }
    }
    return 0;
}