#include <stdio.h>
void findFirstAndLast(int arr[], int n, int x)
{
    int first = -1, last = -1;
    for ( int i = 0; i < n; i++) 
    {
        if (x != arr[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
        printf( "%d %d",first, last);
    else
        printf("-1 -1");
}
int main()
{
    int arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     n = sizeof(arr) / sizeof(int);
    int x ;
    scanf("%d",&x);
    findFirstAndLast(arr, n, x);
    return 0;
}