#include<stdio.h>
int main()
{
    int i,size;
    scanf("%d",&size);
    int a[size],b[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]+b[i]);
    }
    return 0;

}