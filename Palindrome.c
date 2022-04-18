#include<stdio.h>
int main()
{
    int n,rev=0,d,k;
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    if(k==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}