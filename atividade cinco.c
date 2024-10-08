#include<math.h>
#include<stdio.h>
int main (){
    float C;
    float J;
    int M;
    printf("Qual o seu capital?");
    scanf("%f", &C);
    printf("Qual a sua taxa de juros mensal?");
    scanf("%f", &J);
    printf("Qual a mensalidade?");
    scanf("%d", &M);
     float F = C*pow((1+J/100),M);
     printf("%f", F);

}