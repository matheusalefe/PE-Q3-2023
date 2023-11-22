//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

int hanoi(int n, char orig, char dest, char aux, int* mov) {
    if (n > 0) { /* caso geral */
        hanoi(n - 1, orig, aux, dest, mov);
        hanoi(n - 1, aux, dest, orig, mov);
        *mov += 1;
    } 
}

int main(){
    int mov = 0;
    hanoi(3, 'a', 'b', 'c', &mov);
    printf("Número de movimentos: %d\n", mov);
    return 0;
}