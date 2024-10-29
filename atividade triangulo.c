#include<stdio.h>
int main(){
    int lado1;
    int lado2;
    int lado3;
    printf("Qual a medida do primeiro lado?");
    scanf("%d", &lado1);
    printf("Qual a medidado segundo lado?");
    scanf("%d", &lado2);
    printf("Qual a medida do segundo lado?");
    scanf("%d", &lado3);
    if(lado1 ==lado2 && lado1==lado3 && lado2==lado3){
        printf("Equilatero");
    }else if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
        printf("escaleno");
    }else{ printf("isoceles");

    }
}