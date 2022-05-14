#include<stdio.h>
int main()
{
    int arr[100],i,n,rev=0,d,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        rev=0;
        while(temp)
        {
            d=temp%10;
            rev=rev*10+d;
            temp=temp/10;
        }
        printf("%d ",rev);
    }
}