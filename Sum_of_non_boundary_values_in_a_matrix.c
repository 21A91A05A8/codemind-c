#include<stdio.h>
int main()
{
    int arr[100][100],i,j,r,c,sum=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                continue;
            }
            else
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
}