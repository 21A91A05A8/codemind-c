#include<stdio.h>
int operate(int arr[], int N)
{
    int sum = 0, index = 0;
 
label:
    sum += arr[index++];
 
    if (index < N) 
	{
        goto label;
    }
    return sum;
}
int main()
{
    int N,i,sum = 0,arr[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
    	scanf("%d",&arr[i]);
	}
    sum = operate(arr, N);
    printf("%d", sum);
}