#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    int temp;
    printf("Qual o primeiro numero?");
    scanf("%d", &num1);
    printf("Qual o segundo numero?");
    scanf("%d", &num2);
    printf("Qual o terceiro numero?");
    scanf("%d", &num3);
    if(num1>num3){
        temp=num1;
        num1=num3;
        num3=temp;
    }
    if(num1>num2){
        temp=num1;
        num1=num2;
        num2=temp;
    }
     if(num2>num3){
        temp=num2;
        num2=num3;
        num3=temp;
     }
     printf("%d %d %d", num1, num2, num3);

    }
