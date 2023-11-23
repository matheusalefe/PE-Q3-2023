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

void lista_destruir(Lista i){
    Lista aux;
    while (i->prox != NULL){
        aux = i;
        i = i-> prox;
        free(aux);
    }
    free(i);
}


int main(){
    Lista inicial, segundo, terceiro;
    inicial = lista_criar_vazia();
    segundo = adicionar_elemento(inicial, 2);
    terceiro = adicionar_elemento(segundo, 3);
    lista_destruir(terceiro);
    return 0;
}
