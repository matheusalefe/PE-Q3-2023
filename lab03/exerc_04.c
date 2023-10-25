//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#include <string.h>
#define MAX 300

void le_palavra(char* pPalavra, int* pTamanhoPalavra){
    int i;
    scanf("%s", pPalavra);
    for(i=0; i<MAX; i++){
        if(*pPalavra == '\0'){
            break;
        }
    }
    *pTamanhoPalavra = i;
}

void le_frase(char frase[MAX], int* pTamanhoPalavra){
    char entrada;
    int i=0;
    while (entrada != '\n'){
        entrada = getchar();
        if(entrada != '\n')
            frase[i++] = entrada;
    }
    frase[i] = '\0';
    *pTamanhoPalavra = i;
}

int pesquisa_palavra(char palavra[MAX], char frase[MAX]){

}

int main(){
    char chave, palavra[MAX], frase[MAX];
    int tPalavra, tFrase;
    le_palavra(palavra, &tPalavra);
    le_frase(frase, &tFrase);
    printf("Tamanho da palavra: %d\n", tPalavra);
    printf("Tamanho da frase: %d\n", tFrase);
    return 0;
}