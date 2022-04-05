#include <stdio.h>
#include <stdlib.h>
//questao c
int main (void) {

    int N;
    int *array;
    int diferenca = 0;

    scanf("%d",&N);

    array = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++){
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            if( i > 0 && array[i] < array[j]){
                diferenca += abs(array[i] - array[j]);
                array[i] += abs(array[i] - array[j]);
            }
        }
    }

    printf("%d\n",diferenca);

    free(array);

    return 0;
}
