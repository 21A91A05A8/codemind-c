#include<stdio.h>
int main()
{
    int arr[100][100],i,n,m,j,sum1=0,sum2=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
                sum1+=arr[i][j];
        }
    }
    printf("%d",sum1);
}