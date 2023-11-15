//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

void swap(int** a, int** b){
    int* temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void imprime_vetor(int* vet, int n){
    int i;
    printf("{");
    for(i = 0; i < n; i++){
        printf(" %d", vet[i]);
    }
    printf(" }\n");
}

int main(){
    int a[3] = { 2, 3, 4 }, b[2] = { 5, 6 };
    
    swap(&a, &b);
    printf("a: ");
    imprime_vetor(a, 2);
    printf("b: ");
    imprime_vetor(b, 3);

    return 0;
}