//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>
#define MAX 128

char* inverte(char* palavra, int tpalavra){
    char* invertida, *temp;
    int p = 0, i;
    
    invertida = malloc(sizeof(palavra));
    temp = malloc((tpalavra-1) * sizeof(char));

    if(tpalavra == 1) invertida[p] = palavra[tpalavra-1];
    else{
        invertida[p] = palavra[tpalavra-p-1];
        temp = inverte(palavra, tpalavra-p-1);
        for(i = 1; i < tpalavra-p; i++){
            invertida[i] = temp[i-1];
        }
        p++;
    }
    invertida[tpalavra] = '\0';

    return invertida;
}

void le_palavra(char* palavra){
    scanf("%s", palavra);
}

int extrair_tstring(char a[MAX]){
    char temp = a[0];
    int tamanho = 0;

    while(temp != '\0'){
        temp = a[tamanho];
        tamanho++;
    }

    return tamanho-1;
}

int main(){
    char* palavra, *invertida;
    int tpalavra;

    palavra = malloc(MAX*sizeof(char));
    

    le_palavra(palavra);
    tpalavra = extrair_tstring(palavra);
    invertida = malloc(tpalavra*sizeof(char));

    invertida = inverte(palavra, tpalavra);

    printf("Invertida: %s\n", invertida);

    free(palavra);
    free(invertida);

    return 0;
}