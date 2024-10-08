#include<stdio.h>

int main()
{
    float peso;
    float altura;

    printf("Qual o seu peso?");
    scanf("%f", & peso);
    printf("Qual sua altura");
    scanf("%f", & altura);
    float imc=peso/(altura*altura); 
    printf("%f", imc);
    
}
