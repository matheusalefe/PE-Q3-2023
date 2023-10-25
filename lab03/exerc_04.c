//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#include <string.h>
#define MAX 300

void le_palavra(char* pPalavra){
    int i;
    printf("Digite a palavra: ");
    scanf("%s", pPalavra);
    getchar();
}

int coleta_tamanho(char string[MAX]){
    int i;
    for(i=0; i<MAX; i++){
        if(string[i] == '\0') break;
    }
    return i;
}

void le_frase(char frase[MAX]){
    char entrada;
    int i=0;
    printf("Digite a frase: ");
    while (entrada != '\n'){
        entrada = getchar();
        if(entrada != '\n')
            frase[i++] = entrada;
    }
    frase[i] = '\0';
}

int pesquisa_palavra(char palavra[MAX],int tPalavra,char frase[MAX], int tFrase){
    int i=0, j=1,validacao;
    for(i=0;i<tFrase;i++) {
        if(i + tPalavra <= tFrase && frase[i] == palavra[0] && validacao != 1){
            for(j=1;j<tPalavra; j++) {
                if(frase[i+j] == palavra[j]){
                    validacao = 1;
                }else{
                    validacao = 0;
                    break;
                }
            }
        }
    }
        

    return validacao;
}

int main(){
    char chave, palavra[MAX], frase[MAX];
    int tPalavra, tFrase, veredito;
    le_palavra(palavra);
    le_frase(frase);

    tPalavra = coleta_tamanho(palavra);
    tFrase = coleta_tamanho(frase);

    veredito = pesquisa_palavra(palavra, tPalavra, frase, tFrase);

    if(veredito == 1){
        printf("Validacao: sim\n");
    }else{
        printf("Validacao: nao\n");
    }
    return 0;
}