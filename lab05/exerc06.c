//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

void collatz(int n){

    if(n > 1){//Caso geral
        if(n%2 == 0){//Se par
            printf("%d ",n);
            collatz(n/2);
        }else{//Se ímpar
            printf("%d ",n);
            collatz(n*3 + 1);
        }
    }else{//Caso base
        printf("1\n");
    }
}

int main(){
    collatz(7);
    return 0;
}