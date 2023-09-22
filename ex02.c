#include <stdio.h>

int main(){
    int opcao, num1,num2, resultado;
    printf("Escolha uma opção:\n[1] Soma (+)\n[2] Subtração (-)\n[3] Multiplicação (*)\n[4] Divisão (/)\n[5] Sair\n: ");
    scanf("%d", &opcao);
    if (opcao != 5){
        printf("\nDigite o primeiro número: ");
        scanf("%d", &num1);
        printf("\nDigite o segundo número: ");
        scanf("%d", &num2);
        if (opcao == 1){
            resultado = num1 + num2;
            printf("\nResultado: %d\n", resultado);
        } else if (opcao == 2){
            resultado = num1 - num2;
            printf("\nResultado: %d\n", resultado);
        } else if (opcao == 3){
            resultado = num1 * num2;
            printf("\nResultado: %d\n", resultado);
        } else if (opcao == 4){
            resultado = num1 / num2;
            printf("\nResultado: %d\n", resultado);
        }
    }
    return 0;
}