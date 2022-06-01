#include <stdio.h>       
int main()    
{             
    //Declare the length of the array
    int length;
    //printf("Enter the length of the array ");
    scanf("%d",&length);    
    //Declare an array     
    int arr[length];
    for(int i=0;i<length;i++)    //Initialize array 
    scanf("%d",&arr[i]);    
    int n;
    scanf("%d",&n);        
    for(int i = 0; i < n; i++)
   {    
           int j, temp;    
           //Stores the last element of the array    
            temp = arr[length-1];            
            for(j = length-1; j > 0; j--)
            {    
                   //Shift element of array by one    
                    arr[j] = arr[j-1];    
             }    
            //Last element of the array will be added to the start of the array.    
            arr[0] = temp;    
    }            
   
    for(int i = 0; i< length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}