/* Matheus Alefe Munari Zanardi RA 11202111117 */
#include <stdio.h>

int main(){
    int n, i;
    printf("Insira um numero para ver todos os seus antecessores naturais: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++){
        printf("%d ", i);
    }
    printf("\nFim. \n");

    return 0;
}