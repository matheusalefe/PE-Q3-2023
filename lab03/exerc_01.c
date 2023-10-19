//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#include <string.h>
#define MAX 300

char le_chave(){
    char chave;
    scanf("%c", &chave);
    getchar();
    return chave;
}

void le_frase(char frase[MAX], char chave){
    char entrada;
    int i=0;
    while (entrada != chave){
        entrada = getchar();
        if(entrada != chave)
            frase[i++] = entrada;
    }
    frase[i] = '\0';
}

int main(){
    char chave, frase[MAX];
    chave = le_chave();
    printf("Chave: %c\n",chave);
    le_frase(frase, chave);
    printf("Frase: %s", frase);
    return 0;
}