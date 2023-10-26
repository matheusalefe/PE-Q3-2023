//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#define MAX 400
typedef struct{
    int elementos[MAX];
} Conjunto;

Conjunto conjunto(int vet[MAX]){
    Conjunto vetor;
    int i;
    for (i=0; i<MAX; i++){
        vetor.elementos[i] = vet[i];
    }
}
