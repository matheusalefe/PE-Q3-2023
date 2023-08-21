//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

void swap(int** a, int** b){
    int* temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a[3] = { 2, 3, 4 }, b[2] = { 5, 6 };
    
    swap(&a, &b);
    
    return 0;
}