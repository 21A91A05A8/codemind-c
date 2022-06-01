#include <stdio.h>
int main()
{
    int m,n;                 
    scanf("%d %d",&m,&n);   
    int arr[10][10];        
    for(int i=0;i<m;i++)    //Matrix Initialization
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int i = 0, j;
    int max = 0;
    int res[m];
    while (i < n)   //Check for the largest element in an array
    {
       for ( j = 0; j < m; j++)
       {
           if (arr[j][i] > max)      //Check if the element is greater than the maximum element of the column and replace it
           {
              max = arr[j][i];
           }
        }
        res[i] = max;
        max = 0;
        i++;
    }
    for(int i = 0; i < n; i++)      //Print thee largest element
    {
       printf("%d
",res[i]);
    }
    
    return 0;
}