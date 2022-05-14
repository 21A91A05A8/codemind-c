#include<stdio.h>
int main()
{
    int arr[100],i,n,d,rev=0,temp,c=0;
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
        if(rev==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}