#include<stdio.h>
int main()
{
    int arr[100],i,n,k,dc=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            dc++;
        }
    }
    printf("%d",dc);
}