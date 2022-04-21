#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, countWithSpace=0, countWithoutSpace=0;
    scanf("%[^
]s",&str[i]);
    for(i=0; str[i]!=NULL; i++)
    {
        countWithSpace++;
    }
    for(i=0; i<countWithSpace; i++)
    {
        if(str[i]==32)
            countWithoutSpace++;
    }
    countWithoutSpace = countWithSpace-countWithoutSpace;
    printf("%d", countWithoutSpace);
    return 0;
}