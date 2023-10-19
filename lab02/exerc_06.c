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

int validar_simetria(int matriz_1[][MAX], int matriz_tranposta[][MAX], int n_linhas, int n_colunas){
    int i, j, validar = 1;
    for(i = 0; i < n_linhas; i++)
        for(j = 0; j < n_colunas; j++)
            if (matriz_tranposta[i][j] != matriz_1[i][j]) {
                validar = 0;
                break;
            }
    
    return validar;

}

int main(){
    int matriz_1[MAX][MAX], matriz_transposta[MAX][MAX], n_linhas, n_colunas, veredito;
    
    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &n_linhas);
    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &n_colunas);
    
    printf("Matriz 1:\n");
    recebe_matriz(matriz_1, n_linhas, n_colunas);

    transpor_matriz(matriz_1, matriz_transposta, n_linhas, n_colunas);
    veredito = validar_simetria(matriz_1, matriz_transposta, n_linhas, n_colunas);
    if(veredito == 1){
        printf("É simétrica\n");
    }else{
        printf("Não é simétrica.\n");
    }
    return 0;
}
