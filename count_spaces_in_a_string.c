#include<stdio.h>
int main()
{
  char a[60]; 
  int i=0,count=0;
  //printf("Enter the string
");
  scanf("%[^
]s",&a[i]);
  //gets(a);
  //puts(a);
  while(a[i]!=NULL)
  {
     if(a[i]==' ')
     { 
       count++;
     }
     i++;  
  }
  printf("%d",count);
}