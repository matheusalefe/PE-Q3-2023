//Matheus Alefe Munari Zanardi RA 11202111117 
#include <stdio.h>
#define MAX 100

void recebe_matriz(int matriz[][MAX], int n_linhas, int n_colunas){
    int i, j;
    for(i = 0; i < n_linhas; i++)
        for(j = 0; j < n_colunas; j++)
            scanf("%d", &matriz[i][j]);
            
        
}

void troca_linhas(int matriz_1[][MAX], int matriz_2[][MAX], int i, int j,int n_linhas, int n_colunas){
    int n,m;
    for(m = 0; m < n_linhas; m++)
        for(n = 0; n < n_colunas; n++)
            matriz_2[m][n] = matriz_1[m][n];
    for (n = 0; n < n_colunas; n++){
        matriz_2[j][n] = matriz_1[i][n];
        matriz_2[i][n] = matriz_1[j][n];
    }
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
    int matriz_1[MAX][MAX], matriz_troca[MAX][MAX], n_linhas, n_colunas,i,j;
    
    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &n_linhas);
    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &n_colunas);
    
    printf("Matriz 1:\n");
    recebe_matriz(matriz_1, n_linhas, n_colunas);

    printf("Digite i: ");
    scanf("%d", &i);
    printf("Digite j: ");
    scanf("%d", &j);

    troca_linhas(matriz_1, matriz_troca, i, j, n_linhas, n_colunas);

    printf("Matriz após alteração:\n");
    imprime_matriz(matriz_troca, n_linhas, n_colunas);
    return 0;
}
