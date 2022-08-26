#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            if((arr[i+1]%2 && arr[n-1]%2==0)||(arr[i+1]%2==0 && arr[n-1]%2))
            {
                c++;
            }
        }
        else if(i==n-1)
        {
            if((arr[0]%2 && arr[i-1]%2==0)||(arr[0]%2==0 && arr[i-1]%2))
            {
                c++;
            }
        }
        else
        {
            if((arr[i-1]%2 && arr[i+1]%2==0)||(arr[i-1]%2==0 && arr[i+1]%2))
            {
                c++;
            }
        }
    }
    printf("%d",c);
}