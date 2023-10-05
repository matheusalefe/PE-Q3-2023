//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#define MAX 1000

//Busca a posição da chave no vetor
int busca(int valores[], int n, int chave){
    int i, posicao;
    posicao = -1;
    for(i = 0; i < n; i++){
        if(valores[i] == chave){
            posicao = i;
            break;
        }
    }
    return posicao;
}

int main(){
    int valores[MAX], n, chave;
    //Lê o tamanho e os valores do vetor
    printf("Digite o numero de valores que serao lidos: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &valores[i]);
    }
    //Informa a chave
    printf("Digite a chave: ");
    scanf("%d", &chave);
    //Imprime a posição em que a chave foi encontrada
    printf("%d", busca(valores, n, chave));
    return 0;
}