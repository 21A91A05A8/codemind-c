#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int palindrome(int n)
{
    int k,d,rev=0;
    k=n;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==k)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while("TRUE")
    {
        n=n+1;
        if(prime(n))
        {
            if(palindrome(n))
            {
                printf("%d",n);
                break;
            }
        }
    }
}