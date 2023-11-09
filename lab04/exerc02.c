//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void receber_entradas(int n, char* vetor){
    int i;
    char valor;
    for(i = 0; i < n; i++){
        scanf("%c", &valor);
        vetor[i] = valor;
        getchar();
    }
}

void imprimir_saida(int n, char* vetor){
    int i;
    for(i = 0; i < n; i++){
        printf("entrada: %d conteudo: %c endereco: %llu\n", i, vetor[i], &vetor[i]);
    }
    
}

int main(){
    int n;
    char* caracteres;

    scanf("%d\n", &n);

    caracteres = malloc(n * sizeof(char));

    receber_entradas(n, caracteres);
    imprimir_saida(n, caracteres);

    free(caracteres);

    return 0;
}