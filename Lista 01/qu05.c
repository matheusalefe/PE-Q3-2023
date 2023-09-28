/* Matheus Alefe Munari Zanardi RA 11202111117 */
#include <stdio.h>

// lê n inteiros fornecidos pelo usuário e armazena -os no vetor entrada
void le_vetor(int entrada[], int n){
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &entrada[i]);
    }
}
// retorna o valor mínimo do vetor v que tem n elementos
int minimo(int v[], int n){
    int min, i;
    min = v[0];
    for (i = 1; i < n; i++){
        if(v[i] < min){
            min = v[i];
        }
    }
    return min;
}
// retorna o valor máximo do vetor v que tem n elementos
int maximo(int v[], int n){
    int max, i;
    max = v[0];
    for (i = 1; i < n; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}
// retorna a média dos elementos guardados em um vetor v de n elementos
double media(int v[], int n){
    int i;
    double som, med;
    for(i = 0; i < n; i++){
        som += v[i];
    }
    med = som / n;
    return med;
}

int main(){
    int n, v[10000];
    printf("Insira a quantidade de numeros a serem avaliados: ");
    scanf("%d", &n);
    le_vetor(v, n);
    printf("Valor minimo: %d\n",minimo(v,n));
    printf("Valor maximo: %d\n",maximo(v,n));
    printf("Valor medio: %lf\n",media(v,n));
    return 0;
}