#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,rcode[100],gal1,gal2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&rcode[i]);
    }
    for(i=0;i<n;i++)
    {
         if(rcode[i]%2==0)
          {
            gal1++;
          }
          else if(rcode[i]%2!=0)
          {
            gal2++;
          }
    }
    printf("%d %d",gal1,gal2);
}