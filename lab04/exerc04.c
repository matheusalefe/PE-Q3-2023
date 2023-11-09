//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5, b = 7;
    swap(&a, &b);
    printf("a: %d\nb: %d\n", a, b);
    return 0;
}