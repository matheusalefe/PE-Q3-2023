//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>
#define MAX 128

int extrair_tstring(char *a){
    char temp = a[0];
    int tamanho = 0;
    while(temp != '\0'){
        temp = a[tamanho];
        tamanho++;
    }
    return tamanho;
}

char* revert(char* string){
    int t_string, i, c;
    char* result;

    i = t_string = extrair_tstring(string);
    result = malloc(t_string * sizeof(char));

    for(c = 0; c < t_string; c++){
        i--;
        if(i > 0) result[c] = string[i];
        
    } 
    
    result[t_string] = '\0';

    return result;
}

int main(){
    char *string, *contrario;

    string = malloc(MAX*sizeof(char));
    
    printf("Palavra: ");
    scanf("%s" , string);
    contrario = revert(string);

    printf("Contrario: %s\n", contrario);

    free(string);
    free(contrario);

    return 0;
}