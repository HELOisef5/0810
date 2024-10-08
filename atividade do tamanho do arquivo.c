#include<stdio.h>
int main(){
    int tamanho;
    int velocidade;
    printf("Qual o tamanho do arquivo?");
    scanf("%d", &tamanho);
    printf("Qual avelocidade de conexão?");
    scanf("%d", &velocidade);
    int tempo = tamanho / velocidade;
    printf("seu tempo gasto será:");
    printf("%d", tempo);
}