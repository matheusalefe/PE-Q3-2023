/* Matheus Alefe Munari Zanardi RA 11202111117 */
#include <stdio.h>

void imprimir_primos(int num){
    int veredito, i;
    veredito = 1;
    for(i = 2; i <= num/2; i++){
        if(num % i == 0){
            veredito = 0;
        } else {
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