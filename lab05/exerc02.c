//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

void count_up(unsigned int n){
    if(n == 0){
        printf("%d\n", n);
    } else {
        count_up(n-1);
        printf("%d\n", n);
    }
}

int main(){
    unsigned int n;
    printf("Insira o numero para contagem progressiva: ");
    scanf("%d", &n);
    count_up(n);
    return 0;
}