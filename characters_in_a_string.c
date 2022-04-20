#include <stdio.h>
#include <string.h>
int main()
{
    char Str[100];
    int i;
    scanf("%[^
]s",Str);
    for (i = 0; Str[i] != NULL;i++);
    printf("%d",i);
    return 0;
}    