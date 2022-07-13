#include <stdio.h>
#include <string.h>
int main() 
{
   char s[100];
   int i,c=0;
   scanf("%[^
]s",&s);
   for (i = 0; s[i]!=NULL; i++) 
   {
      if(s[i] >= 'A' && s[i] <= 'Z') 
      {
         c++;
      }
   }
   printf("%d",c);
   return 0;
}