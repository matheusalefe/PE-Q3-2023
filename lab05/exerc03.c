//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int soma(int v[MAX], int n){
    int p, s = 0;
    p = n - 1;
    if(n == 1) {
        s += v[0];
    }
    else{
        s += v[p];
        s += soma(v, p);
    }

    return s;
}

void recebe_vetor(int* v, int n){
    int i, valor=0;
    for(i = 0; i < n; i++){
        scanf("%d", &valor);
        v[i] = valor;
    }

}

int main(){
    int* vet;
    int n, s;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    vet = malloc(n * sizeof(int));
    recebe_vetor(vet, n);

    s = soma(vet, n);
    printf("Soma: %d\n", s);

    free(vet);

    return 0;
}