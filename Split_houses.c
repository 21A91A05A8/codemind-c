#include <stdio.h>


 

int main(){

    int n,i;

    scanf("%d", &n);


 

    char village[n];

    scanf("%s", &village);


 

    for(i=0; i<n; i++){

        if(village[i]=='H' && village[i+1]=='H'){

            printf("NO");

            break;

        }


 

        if(village[i]=='.'){

            village[i]='B';

        }

    }


 

    if(i==n){

        printf("YES
%s", village);

    }


 

    return 0;

}