#include <stdio.h>

// A recursive function that returns the GCD of two numbers.
int gcd(int x, int y)
{
	return y == 0 ? x : gcd(y, x % y);
}

int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d",lcm(a, b));
}