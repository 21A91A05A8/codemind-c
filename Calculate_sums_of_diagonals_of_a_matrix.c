#include<stdio.h>
int main()
{
    int arr[100][100],i,n,j,s=0,s1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                s+=arr[i][j];
            }
            if(j==n-i-1)
            {
                s1+=arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",s);
    printf("Secondary Diagonal:%d",s1);
}