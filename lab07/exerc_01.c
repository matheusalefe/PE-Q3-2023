//Matheus Alefe Munari Zanardi RA11202111117
#include <stdio.h>

int word_count(FILE *arquivo){
    int i = 0;
    char *word;

    while(fscanf(arquivo, "%s", word) != EOF){
        i++;
    }

    return i;
}

int main(int argc, char *argv[]){
    FILE *arq;
    int n;
    if (argc < 2){
        printf("Usage: %s filepath\n", argv[0]);

        return 1;
    }
    else{
        arq = fopen(argv[1], "r");
        n = word_count(arq);
        printf("Numero de palavras: %d\n", n);
        fclose(arq);
        
        return 0;
    }
}