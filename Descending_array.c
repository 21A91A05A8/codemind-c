#include <stdio.h>
int main()
{
  int n, s[1000], a = 1, d = 1, i;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &s[i]);

  i = 0;

  while ((a == 1 || d == 1) && i < n - 1) {
    if (s[i] < s[i+1])
      d = 0;
    else if (s[i] > s[i+1])
      a = 0;
    i++;
  }

  if (a == 1)
    printf("The array is sorted in ascending order.
");
  else if (d == 1)
    printf("yes
");
  else
    printf("no
");

  return 0;
}