//Matheus Alefe Munari Zanardi RA11202111117
#include <stdio.h>

void grep(FILE *arq, char *nome_arq, char *chave){
    char *c;
    int linha;
    linha = obtem_linha(chave, arq);
    printf("%s\n", *nome_arq);
    imprme_linhaf(chave, linha);
}

int obtem_linha(char *chave, FILE *arq){
    int i, n=0;
    char *aux;
    while(aux != chave){
        fscanf(arq, "%s", aux);
        if(*aux == "\n"){
            n++;
        }
    }

    return n;
}

void imprme_linhaf(char *chave, int linha){
    
}

int main(int argc, char *argv[]){
    FILE *arq;
    int i = 2;
    if (argc < 3){
        printf("Usage: %s string file1path file2path ... fileNpath\n", argv[0]);

        return 1;
    }
    else{
        for(i; i <argc; i++){
            arq = fopen(argv[i], "r");
            grep(arq, argv[i], argv[1]);
            fclose(arq);
        }
        
        return 0;
    }
}