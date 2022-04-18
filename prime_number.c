#include <stdio.h>
#include<math.h> 

int main() 
{
    int num;    //Declare the number
    scanf("%d",&num);    //Initialize the nummber
    int count=0;
    for(int i=2;i<=sqrt(num);i++)   //Iterate from 2 to sqrt(num)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count!=0)     //Check whether prime or not
    {
        printf("not a prime");
    }
    else
    {
        printf("prime");
    }
}