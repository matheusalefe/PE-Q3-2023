//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

void count_down(int n){
    if(n == 0) {
        printf("ACABOU\n");
    }
    else {
        printf("%d\n", n);
        count_down(n-1);
    }
}

int main(){
    count_down(5);
    return 0;
}
