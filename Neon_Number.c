#include<stdio.h>	
int main()
{
	int n,sum=0,power,d;
	scanf("%d",&n);
	power=n*n;
	while(power)
	{
		d=power%10;
		power=power/10;
		sum=sum+d;
	}
	if(sum==n)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}