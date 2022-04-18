#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0,dc=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            dc=1;
        }
    }
    if(dc==1)
    {
        printf("True");
    }
    if(dc==0)
    {
        printf("False");
    }
}