#include<stdio.h>

int main()
{
    //1
    int i;
    int firstNumber,secondNumber;

    //2
    int firstDivisorSum = 0;
    int secondDivisorSum = 0;

    //3
    scanf("%d%d",&firstNumber,&secondNumber);

    //4
    for(int i=1;i<firstNumber;i++){
    //5
        if(firstNumber % i == 0){
            firstDivisorSum = firstDivisorSum + i;
        }
    }

    //6
    for(int i=1;i<secondNumber;i++){
        if(secondNumber % i == 0){
            secondDivisorSum = secondDivisorSum + i;
        }
    }

    //7
    if((firstNumber == secondDivisorSum) && (secondNumber == firstDivisorSum)){
        printf("Amicable");
    }else{
        printf("Not Amicable");
    }

}