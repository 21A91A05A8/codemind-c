#include<stdio.h>
int main()
{
    int n,k,d,e,rev=0,i,jrev=0,j;
    scanf("%d",&n);
    k=n;
    i=k*k;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    j=rev*rev;
    while(j!=0)
    {
        e=j%10;
        jrev=jrev*10+e;
        j=j/10;
    }
    if(jrev==i)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}