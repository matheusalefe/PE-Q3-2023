//Matheus Alefe Munari Zanardi RA11202111117
#include <stdio.h>
#include <stdlib.h>

typedef struct no* Lista;

struct no{
    int valor;
    Lista prox;
};

Lista lista_criar_vazia(){
    return NULL;
}

Lista adicionar_elemento(Lista l, int x) {
    Lista novo;
    novo = malloc(sizeof(struct no));
    novo ->valor = x;
    novo ->prox = l;
    return novo;
}

Lista procurar_elemento(int x, Lista l){
    Lista aux;
    while(l->valor != x){
        
    }

}