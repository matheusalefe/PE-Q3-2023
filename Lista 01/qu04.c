/* Matheus Alefe Munari Zanardi RA 11202111117 */
#include <stdio.h>

void receber_vetor(double vetor[], int t){
    int i;
    for(i = 0; i < t; i++){
        scanf("%lf", &vetor[i]);
    }
}

void produto_hadamard(double u[], double v[], double resultado[], int t){
    int i;
    printf("[ ");
    for(i = 0; i < t; i++){
        resultado[i] = u[i] * v[i];
        printf("%lf ", resultado[i]);
    }
    printf("]");
    printf("\nFim.\n");
}

int main(){
    int tamanho;
    double u[100], v[100], resultado[100];
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    while(tamanho < 1 || tamanho > 100){
        printf("Tamanho invalido. Digite novamente: ");
        scanf("%d", &tamanho);
    }
    receber_vetor(u, tamanho);
    receber_vetor(v, tamanho);
    produto_hadamard(u, v, resultado, tamanho);
    return 0;
}