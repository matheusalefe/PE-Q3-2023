/* Matheus Alefe Munari Zanardi RA 11202111117 */
#include <stdio.h>

void conversao(int tipo){
    int temp_c, temp_f;
    //Conversão de ºC para ºF
    if(tipo == 1){
        printf("Insira a temperatura em oC: ");
        scanf("%d", &temp_c);
        temp_f = (temp_c * 1.8) + 32;
        printf("A temperatura equivale a %doF", temp_f);
    } 
    //Conversão de ºF para ºC
    else {
        printf("Insira a temperatura em oF: ");
        scanf("%d", &temp_f);
        temp_c = (temp_f - 32) / 1.8;
        printf("A temperatura equivale a %doC", temp_c);
    }
}

int main(){
    int opcao, temperatura;
    printf("Escolha uma opcao:\n[1] Converter oC para oF\n[2] Converter oF para oC\n: ");
    scanf("%d", &opcao);
    conversao(opcao);
    return 0;
}