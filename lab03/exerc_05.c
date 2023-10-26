//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#include <string.h>
#define MAX 400



void le_paragrafro(char paragrafo[MAX]){
    char entrada;
    int i=0;
    printf("Digite o paragrafo: ");
    while (entrada != '\n'){
        entrada = getchar();
        if(entrada != '\n')
            paragrafo[i++] = entrada;
    }
    paragrafo[i] = '\0';
}

int coleta_tamanho(char string[MAX]){
    int i;
    for(i=0; i<MAX; i++){
        if(string[i] == '\0') break;
    }
    return i;
}

void formata_paragrafo(char paragrafo[MAX], int tamanho){
    int i,j,contadorCarac = 0, tProximaPlavra = 0, linha;
    for (i=0; i<tamanho; i++){
        contadorCarac++;
        if(paragrafo[i] == ' '){
            j = i + 1;
            while (paragrafo[j] != ' '){
                tProximaPlavra++;
                j++;
                if(contadorCarac+tProximaPlavra >= 80){
                    paragrafo[i] = '\n';
                    contadorCarac = 0;
                    tProximaPlavra = 0;
                }
            }
            
        }
    }
}

void imprime_paragrafo(char paragrafo[MAX], int tamanho){
    int i;
    for(i=0; i<tamanho; i++){
        printf("%c", paragrafo[i]);
    }
    printf("\n");
}

int main(){
    char paragrafo[MAX];
    int tParagrafo;
    le_paragrafro(paragrafo);
    tParagrafo = coleta_tamanho(paragrafo);
    formata_paragrafo(paragrafo, tParagrafo);
    imprime_paragrafo(paragrafo, tParagrafo);
    return 0;
}