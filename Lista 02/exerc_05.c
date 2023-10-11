//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#define MAX 100

void recebe_matriz(int matriz[][MAX], int n_linhas, int n_colunas){
    int i, j;
    for(i = 0; i < n_linhas; i++)
        for(j = 0; j < n_colunas; j++)
            scanf("%d", &matriz[i][j]);
            
        
}

void transpor_matriz(int matriz_1[][MAX], int matriz_tranposta[][MAX], int n_linhas, int n_colunas){
    int i, j;
    for(i = 0; i < n_linhas; i++)
        for(j = 0; j < n_colunas; j++)
            matriz_tranposta[j][i] = matriz_1[i][j];

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
    int matriz_1[MAX][MAX], matriz_transposta[MAX][MAX], n_linhas, n_colunas;
    
    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &n_linhas);
    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &n_colunas);
    
    printf("Matriz 1:\n");
    recebe_matriz(matriz_1, n_linhas, n_colunas);

    transpor_matriz(matriz_1, matriz_transposta, n_linhas, n_colunas);
    
    printf("Matriz transposta:\n");
    imprime_matriz(matriz_transposta, n_colunas, n_linhas);
    return 0;
}
