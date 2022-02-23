#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int n1=n,c=0;
    while(n1!=0)
    {
        n1/=10;
        c++;
    }
    n1=n;
    int sum=0;
    while(n1!=0)
    {
        int rem=n1%10;
        sum+=pow(rem,c);
        n1/=10;
        c--;
    }
   if(sum==n)
    printf("True");
   else
    printf("False");
}