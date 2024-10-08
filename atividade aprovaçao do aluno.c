#include<math.h>
#include<stdio.h> 
int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    printf("Qual a nota do primeiro bimestre?");
    scanf("%f", &nota1);
    printf("Qual a nota do segundo bimestre?");
    scanf("%f", &nota2);
    printf("Qual a nota do terçeiro bimestre?");
    scanf("%f", &nota3);
    printf("Qual a nota do quarto bimestre?");
    scanf("%f", &nota4);
    int media= (nota1 + nota2 + nota3 + nota4)/4;

    if(media>=7.0){
        printf("Aprovado!");
    }
    if(media <7.0 && media>=4.0 ){
    printf(" Tera que fazer o exame final");
    }
    if(media < 4.0){
        printf("Reprovado!");

    }
}
