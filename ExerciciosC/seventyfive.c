#include <stdio.h>
#include <stdlib.h>

int crescente(const void *a, const void *b){
    if(*(int*)a == *(int*)b){
        return 0;
    }
    else{
        if (*(int*)a < *(int*)b){
            return -1;
        }
        else{
            return 1;
        }
    }
}

int main (void) {
    int E, T;
    int *A;
    int *B;
    int **L;
    int cont1 = 0;
    int cont2 = 0;
    int ind = 0;

    scanf("%d %d",&E,&T);

    B = malloc(E * sizeof(int));
    A = malloc(E * sizeof(int));
    if(A == NULL){
        printf("FALHA NA ALOCACAO DE E\n");
        exit(1);
    }
    L = (int **)malloc(T * sizeof(int*));
    for(int i = 0; i < T; i++){
        L[i] = (int *) malloc(2 * sizeof(int));
        if(L[i] == NULL){
            printf("FALHA NA ALOCACAO DE A%d\n",i);
        }
    }

    for(int i = 0; i < E; i++){
        scanf("%d",&A[i]);
    }
    for(int i = 0; i < T; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d",&L[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < T; i++){
        cont1 = abs(L[i][0] - 1);
        cont2 = abs(L[i][1] - 1);
        if(A[cont1] > A[cont2]){
            if(ind == E){
                E++;
                B = realloc(B,E * sizeof(*B)); 
            }
            B[ind] = A[cont1];
            ind++;
        }
        else{
            if(ind == E){
                E++;
                B = realloc(B,E * sizeof(*B)); 
            }
            B[ind] = A[cont2];
            ind++;
        }
    }
    qsort(B,E,sizeof(int),crescente);
    cont1 = 0;
    for(int i = 0; i < E; i++){
        if(B[i] != B[i + 1] && B[i] != 0){
            cont1++;
        }
    }
    printf("%d",cont1);

    for(int i = 0; i < T; i++){
        free(L[i]);
    }
    free(L);
    free(A);

    return 0;
}
