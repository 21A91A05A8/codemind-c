#include<stdio.h>
int main()
{
    int t,b,s,capacity,capa;
    scanf("%d%d%d",&t,&b,&s);
    capacity=2*s*t*b*512;
    capa=capacity/1024;
    printf("%dKB",capa);
}