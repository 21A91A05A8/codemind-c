#include<stdio.h>
int main()
{
    int x[20],n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&x[i]);
    
    for(i=0;i<n;i++)//elements i want to check
    {
        count=0;
        for(j=0;j<n;j++)// to check all the elements in array
        {
            if(x[j]<x[i])//smaller numbers
            count++;
        }
        printf("%d ",count);
    }
    return 0;
}