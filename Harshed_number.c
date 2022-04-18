#include<stdio.h>
int main()
{
    int n,d,k,sum=0;
    scanf("%d",&n);
    k=n;
    while(d=n%10)
    {
	 sum=sum+d;
     n=n/10;
    }
     if(k%sum==0)
    {
       printf("True");
    }
    else
    {
        printf("False");
    }
}