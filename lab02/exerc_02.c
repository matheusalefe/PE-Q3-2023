//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#define MAX 100

void ordena(int valores[MAX], int n){
    int aux, i, j;
    for(i=0; i < n; i++){
        for(j=0; j < n; j++){
            if(valores[i] > valores[j]){
                aux = valores[j];
                valores[j] = valores[i];
                valores[i] = aux;
            }
        }
    }
}

void imprime_vetor(int valores[MAX], int n){
    int i;
    printf("[ ");
    for(i=0; i < n; i++){
        printf("%d ", valores[i]);
    }
    printf("]\n");
}

int main(){
    int valores[MAX], n, i;
    //Lê o tamanho e os valores do vetor
    printf("Digite o numero de valores que serao lidos: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &valores[i]);
    }
    ordena(valores, n);
    imprime_vetor(valores, n);
    return 0;
}