//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

void receber_entradas(int n, int* vetor){
    int i;
    int valor;
    for(i = 0; i < n; i++){
        scanf("%d", &valor);
        vetor[i] = valor;
    }
}

void imprimir_saida(int n, int* vetor){
    int i;
    for(i = 0; i < n; i++){
        printf("entrada: %d conteudo: %d endereco: %llu\n", i, vetor[i], &vetor[i]);
    }
    
}

int main(){
    int n;
    int* caracteres;

    scanf("%d\n", &n);

    caracteres = malloc(n * sizeof(int));

    receber_entradas(n, caracteres);
    imprimir_saida(n, caracteres);

    free(caracteres);

    return 0;
}