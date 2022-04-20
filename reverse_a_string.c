#include<stdio.h>
int strlen(char *str)
{
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        
    }
    return i;
}
void strrev(char *str)
{
    int i,j,d,temp;
    d=strlen(str);
    i=0;
    j=d-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    strrev(str);
    printf("%s",str);
}