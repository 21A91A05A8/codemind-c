#include<stdio.h>
int main()
{
    int p,simpleintrest;
    float t,r;
    scanf("%d %f %f",&p,&t,&r);
    simpleintrest=p*t*r/100;
    printf("%d ",simpleintrest);
}