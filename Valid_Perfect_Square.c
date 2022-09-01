#include<stdio.h>
#include<math.h>
int ps(int n)
{
    int ivar;
    float fvar;
    fvar=sqrt(n);
    ivar=int(fvar);
    if(ivar==fvar)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=t;i>0;i--)
    {
        int n;
        scanf("%d",&n);
        if(ps(n))
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}