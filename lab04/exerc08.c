//Matheus Alefe Munari Zanardi RA 11202111117
#include <stdio.h>
#include <stdlib.h>

int** cartesiano(int* v1, int n1, int* v2, int n2){
    int** res;
    int t_res, i, vet_temp[2];

    if(n1 > n2) t_res = n1;
    else t_res = n2;

    res = malloc(t_res * sizeof(vet_temp));

    for (i = 0; i < t_res; i++){
        
        if(i < n1) vet_temp[0] = v1[i];
        else vet_temp[0] = 0;

        if(i < n2) vet_temp[1] = v2[i];
        else vet_temp[1] = 0;

        res[i] = vet_temp;
    }

    return res;
}

void recebe_vetor(int* v1, int n1){
    int i;
    for(i = 0; i < n1; i++){
        scanf("%d", &v1[i]);
    }
}

int main(){
    int n1, n2, *v1, *v2, **res;
    
    printf("Numero de posicoes de v1: ");
    scanf("%d", &n1);
    v1 = malloc(n1 * sizeof(int));
    recebe_vetor(v1, n1);

    printf("Numero de posicoes de v2: ");
    scanf("%d", &n2);
    v2 = malloc(n2 * sizeof(int));
    recebe_vetor(v2, n2);

    res = cartesiano(v1, n1, v2, n2);

    free(v1);
    free(v2);
    free(res);

    return 0;
}