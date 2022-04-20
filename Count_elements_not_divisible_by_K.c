#include<stdio.h>
int main()
{
    int n,arr[100],i,k,dc=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)//1 2 3 4 5 8 13 21 7
    {
        if(arr[i]%k!=0)//2 8 
        {
            dc++;//2
        }
    }
    printf("%d",dc);
}