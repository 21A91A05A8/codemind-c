#include<stdio.h>
int main()
{
    int N,digit,sum =0;
    scanf("%d",&N);
    int square = N*N;
    while(square!=0)
    {
        digit = square%10;
        sum += digit;
        square = square/10;
    }
    if(sum == N)
        printf("Neon Number ");
    else
        printf("Not Neon Number ");  

}