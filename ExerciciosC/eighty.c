#include <stdio.h>
#include <stdlib.h>

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
        if( i > 0 && array[i] < array[i - 1]){
            diferenca += abs(array[i] - array[i - 1]);
            array[i] += abs(array[i] - array[i - 1]);
        }
    }
    printf("%d\n",diferenca);
    for (int i = 0; i < N; i++){
        printf("%d ",array[i]);
    }

    free(array);

    return 0;
}
