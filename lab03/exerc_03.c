//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#include <string.h>
#define MAX 300

void le_frase(char frase[MAX]){
    char entrada;
    int i=0;
    while (entrada != '\n'){
        entrada = getchar();
        if(entrada != '\n')
            frase[i++] = entrada;
    }
    frase[i] = '\0';
}

void inverte_maiusculas_minusculas(char frase[MAX]){
    int i = 0;
    while(frase[i] != '\0'){
        if(frase[i] >= 'A' && frase[i] <= 'Z' ){
            frase[i] += 32;
        } else if(frase[i] >= 'a' && frase[i] <= 'z' ){
            frase[i] -= 32;
        }
        i++;
    }
}

int main(){
    char chave, frase[MAX];
    le_frase(frase);
    printf("Frase: %s\n", frase);
    inverte_maiusculas_minusculas(frase);
    printf("Frase invertida: %s\n", frase);
    return 0;
}