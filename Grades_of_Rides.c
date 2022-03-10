#include<stdio.h>
int main()
{
    int hf,speedf,spinf;
    scanf("%d%d%d",&hf,&spinf,&speedf);
    if(hf>50 && spinf>60 && speedf>100)
    {
        printf("10");
    }
    else if(hf>50 && spinf>60)
    {
        printf("9");
    }
    else if(spinf>60 && speedf>100)
    {
        printf("8");
    }
    else if(hf>50 && speedf>100)
    {
        printf("7");
    }
    else if(hf>50 && ~(spinf>60 && speedf>100))
    {
        printf("6");
    }
    else if(speedf>100 && ~(hf>50 && spinf>100))
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
    return 0;
}