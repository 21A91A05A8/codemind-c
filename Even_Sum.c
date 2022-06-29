#include<stdio.h>
int main()
{
    int arr[100],i,n,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum1+=arr[i];
        }
        else
        {
            continue;
        }
    }
    printf("%d",sum1);
}