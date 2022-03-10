#include<stdio.h>
int main()
{
    int x[20],n,i,a,b,min=99;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }    
        scanf("%d%d",&a,&b);
        for(i=0;i<n;i++)
        {
            if(x[i]>=a && x[i]<=b)
            {
                continue;
            }
            else
            {
                if(min>=x[i])
                min=x[i];
            }
        }
        if(min==99)
        {
            printf("-1");
        }
        else
        {
            printf("%d",min);
        }
}