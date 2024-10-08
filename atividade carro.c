#include<stdio.h>
int main (){ 
    float distancia;
    float combustivel;
    printf("Qual a distancia percorrida?");
    scanf("%f", &distancia);
    printf("Qual o total de combustível gasto?");
    scanf("%f", &combustivel);
    float media= distancia/combustivel;
    printf("%f", media);
    
}