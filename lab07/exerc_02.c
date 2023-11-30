//Matheus Alefe Munari Zanardi RA11202111117
#include <stdio.h>

void cat(FILE *arquivo){
    char c;

    while(fscanf(arquivo, "%c", &c) != EOF){
        printf("%c",c);
    }
}

int main(int argc, char *argv[]){
    FILE *arq;
    if (argc < 2){
        printf("Usage: %s filepath\n", argv[0]);

        return 1;
    }
    else{
        arq = fopen(argv[1], "r");
        cat(arq);
        fclose(arq);
        
        return 0;
    }
}