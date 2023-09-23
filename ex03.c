#include <stdio.h>

int main(){
    int n;
    printf("Insira um número: ");
    scanf("%d", &n);
    if (n%3 == 0 && n%5 == 0){
        printf("\n%d é um número divisível por 3 e 5 simultaneamente\n", n);
    }else{
        printf("\n%d não é um número divisível por 3 e/ou 5\n", n);
    }
    return 0;
}