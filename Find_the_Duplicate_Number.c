#include<stdio.h>


int main()
 {
  int i,arr[20],j,no;
 
  scanf("%d",&no);

  for(i=0;i<no;i++)
  {
   scanf("%d",&arr[i]);
  }

  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("%d
",arr[i]);
    }
   
   }
  
 }    
    return 0;    
}