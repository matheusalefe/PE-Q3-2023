//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#include <string.h>
#define MAX 300

void le_frase(char frase[MAX]){
    char entrada, chave = '\n';
    int i=0;
    while (entrada != chave){
        entrada = getchar();
        if(entrada != chave)
            frase[i++] = entrada;
    }
    frase[i] = '\0';
}

void conta_maximo_zeros(char frase[MAX]){
    char entrada;
    int i = 0, n = 0, n_max = 0;
    while (1){
        if(frase[i] == '0')
            n++;
        else {
            if (n > n_max){
                n_max = n;
                n = 0;
            } 
        }
        if(frase[i] == '\0') break;
        i++;
    }
    printf("Numero maximo de zeros em sequencia: %d\n", n_max);
}

int main(){
    char frase[MAX];
    int num;

    le_frase(frase);
    printf("Frase: %s\n", frase);
    conta_maximo_zeros(frase);
    
    return 0;
}