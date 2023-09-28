#include <stdio.h>

int operacao(int num){
    int dois_primeiros, dois_ultimos, soma;
    dois_primeiros = num/100;
    dois_ultimos = num % 100;
    soma = dois_primeiros + dois_ultimos;
    return soma*soma;
}

int main(){
    int num_raiz, num_operado;
    scanf("%d",&num_raiz);
    num_operado = operacao(num_raiz);
    if(num_raiz == num_operado){
        printf("Válido!\n");
    } else {
        printf("Inválido!\n");
    }
    return 0;
}