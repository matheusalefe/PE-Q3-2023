//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

void incr(int* a){
    *a +=1 ;
}

int main(){
    int a = 5;
    incr(&a);
    printf("a: %d\n", a);
    return 0;
}