#include<stdio.h>

int main(){

   char word[100];

   int i = 0, z_count = 0, o_count = 0;

   scanf("%s", &word);

 

   while(word[i] != NULL){

       if(word[i] == 'z'){

           z_count++;

       }else if(word[i] == 'o'){

           o_count++;

       }

       i++;

   }

   int countz= 2 * z_count;

   if(countz == o_count){

       printf("Yes
");

   }else{

       printf("No
");

   }

   return 0;

}