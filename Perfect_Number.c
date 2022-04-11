#include<stdio.h>
int main()
{
    int i,n,rem,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}