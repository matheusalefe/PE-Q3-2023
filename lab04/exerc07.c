//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>
#define MAX 128

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
    return tamanho;
}

void strcat(char* a, char* b){
    int tamanho_a, tamanho_b, tamanho_c, i;
    char* c;

    tamanho_a = extrair_tstring(a) - 1;
    tamanho_b = extrair_tstring(b) - 1;
    tamanho_c = tamanho_a + tamanho_b;

    c = malloc(tamanho_c * sizeof(char));

    for(i = 0; i <= tamanho_c; i++){
        if (i < tamanho_a) c[i] = a[i];
        else if (i >= tamanho_a && i < tamanho_c) c[i] = b[i - tamanho_a];
        else c[i] = '\0';
    }

    printf("concat: %s\n", c);
    free(c);

}

int main(){
    char *palavra1, *palavra2;

    palavra1 = malloc(MAX * sizeof(char));
    palavra2 = malloc(MAX * sizeof(char));

    le_palavra(palavra1);
    le_palavra(palavra2);

    strcat(palavra1, palavra2);

    free(palavra1);
    free(palavra2);

    return 0;
}