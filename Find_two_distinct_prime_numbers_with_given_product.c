#include <stdio.h>
int checkPrime(int n) 
{
  int i, isPrime = 1;
  if (n == 0 || n == 1) {
    isPrime = 0;
  }
  else {
    for(i = 2; i <= n/2; ++i) {
      if(n % i == 0) {
        isPrime = 0;
        break;
      }
    }
  }

  return isPrime;
}
int main() 
{
  int n, i, flag = 0;
  scanf("%d", &n);
  for (i=2;i<=n/2; ++i) {
    if(i*(n/i)==n)
    {
        if (checkPrime(i) == 1) 
       {
          if (checkPrime(n/i) == 1) 
          {
            printf("%d %d",i, n/i);
            flag = 1;
            break;
          }
       }
    }
  }
  if (flag == 0)
    printf("-1");

  return 0;
}