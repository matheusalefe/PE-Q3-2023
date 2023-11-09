//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

void receber_numeros(int n, int* vetor){
    int i, valor;
    for(i = 0; i < n; i++){
        scanf("%d", &valor);
        vetor[i] = valor;
    }
}

double calcular_media(int n, int* vetor){
    int i;
    double m, s=0.0;
    for(i=0; i < n; i++){
        s += vetor[i];
    }
    m = s/n;
    return m;
}

int main(){
    int n;
    int* numeros;
    double media;

    printf("Insira a quantidade de numeros para calcular a media: ");
    scanf("%d\n", &n);

    numeros = malloc(n * sizeof(int));

    receber_numeros(n, numeros);
    media = calcular_media(n, numeros);
    printf("Media: %lf\n", media);

    free(numeros);

    return 0;
}