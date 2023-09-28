#include <stdio.h>

int inverter(int num_raiz){
    int tamanho, operado;
    operado = 0;
    while(num_raiz != 0){
        operado = operado*10+(num_raiz%10);
        num_raiz /= 10;
    }
    printf("%d\n",operado);
    return operado;
}

int main(){
    int num, inv, i;
    printf("Digite um número: ");
    scanf("%d",&num);
    if (num == inverter(num)){
        printf("É Capicua\n");
    }else{
        printf("Não é Capicua\n");
    }
    return 0;
}