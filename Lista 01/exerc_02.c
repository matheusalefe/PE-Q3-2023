/* Matheus Alefe Munari Zanardi RA 11202111117 */
#include <stdio.h>

void imprimir_primos(int num){
    int i, j, veredito;
    for(i = 2; i <= num; i++){
        for (j = 2; j <= num; j++){
            if (i != j){
                if (i % j != 0){
                    veredito = 0;
                } else {
                    veredito = 1;
                    break;
                }
            }
        }
        if (veredito == 0){
            printf("%d ", i);
        }
        veredito = 1;
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