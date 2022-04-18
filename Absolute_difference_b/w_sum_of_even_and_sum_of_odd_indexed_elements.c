#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],n,i,esum=0,osum=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            esum+=arr[i];
        }
        if(i%2)
        {
            osum+=arr[i];
        }
    }
    diff=abs(esum-osum);
    printf("%d",diff);
}