//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#define MAX 100

void recebe_matriz(int matriz[][MAX], int n_linhas, int n_colunas){
    int i, j;
    for(i = 0; i < n_linhas; i++)
        for(j = 0; j < n_colunas; j++)
            scanf("%d", &matriz[i][j]);
            
        
}

void soma_matrizes(int matriz_1[][MAX], int matriz_2[][MAX], int matriz_soma[][MAX], int n_linhas, int n_colunas){
    int i, j;
    for(i = 0; i < n_linhas; i++)
        for(j = 0; j < n_colunas; j++)
            matriz_soma[i][j] = matriz_1[i][j] + matriz_2[i][j];

}

void imprime_matriz(int matriz[][MAX], int n_linhas, int n_colunas){
    int i, j;
    for (i = 0; i < n_linhas; i++)
        for (j = 0; j < n_colunas; j++){
            if (j != n_colunas-1)
                printf("%d ", matriz[i][j]);
            else
                printf("%d\n", matriz[i][j]);
        }  
}

int main(){
    int matriz_1[MAX][MAX], matriz_2[MAX][MAX], matriz_soma[MAX][MAX], n_linhas, n_colunas;
    
    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &n_linhas);
    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &n_colunas);
    
    printf("Matriz 1:\n");
    recebe_matriz(matriz_1, n_linhas, n_colunas);
    printf("Matriz 2:\n");
    recebe_matriz(matriz_2, n_linhas, n_colunas);

    soma_matrizes(matriz_1, matriz_2, matriz_soma, n_linhas, n_colunas);
    
    printf("Matriz soma:\n");
    imprime_matriz(matriz_soma, n_linhas, n_colunas);
    return 0;
}
