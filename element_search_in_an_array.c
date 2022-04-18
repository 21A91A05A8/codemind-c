#include<stdio.h>
int searchelement(int *arr,int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[100],n,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(searchelement(arr,n,k))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}