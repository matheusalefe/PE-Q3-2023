/* Matheus Alefe Munari Zanardi RA 11202111117 */
#include <stdio.h>

void imprimir_primos(int num){
    int i, j, veredito;
    veredito = 1;
    for(i = 1; i <= num; i++){
        for(j = 1; j <= i/2; j++){
            if(i != 1 && i != j && i % j == 0){
                veredito = 0;
            } 
        }
        if (veredito == 1) {
            printf("%d ", i);
        }
    }

}

int main(){
    int n;
    printf("Insira um numero para ver todos os seus antecessores primos naturais: ");
    scanf("%d", &n);
    imprimir_primos(n);
    printf("\nFim. \n");

    return 0;
}