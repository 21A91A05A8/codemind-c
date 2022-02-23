#include<stdio.h>
int main()
{
    int n,d,max=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        if(max<d)
        {
            max=d;
        }
    }
    printf("%d",max);
}