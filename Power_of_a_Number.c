#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,power,d;
    scanf("%d%d%d",&x,&y,&m);
    power=pow(x,y);
    d=power%m;
    printf("%d",d);
}