#include <stdio.h>

int main()
{
    char str[64];
    int i = 0;
    int sum = 0;
    scanf("%[^
]s", str);

    while (str[i] != 0) {
        if ((str[i] >= '0') && (str[i] <= '9'))
            sum += (str[i] - 0x30);
        i++;
    }
    printf("%d
", sum);

    return 0;
}