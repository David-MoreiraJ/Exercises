#include <stdio.h>
#include <stdlib.h>

int main (void){

    int N;
    int contador = 1;
    char **matriz;
    char **mirror;

    scanf("%d",&N);

    matriz = malloc(N * sizeof(char*));
    mirror = malloc(N * sizeof(char*));

    for(int i = 0; i < N; i++){
        matriz[i] = malloc((N + 1) * sizeof(char));
        mirror[i] = malloc((N + 1) * sizeof(char));
        scanf("%s",matriz[i]);
    }
    printf("\n");

    /*for(int i = 0; i < N; i++){
        scanf("%s",mirror[i]);
    }*/

    for(int i = N; i > 0; i--){
        for(int j = N; j > 0; j--){
            mirror[i][j] = matriz[i][j];
        }
        printf("%s\n",mirror[i]);
    }
    //printf("%d",contador);

    return 0;
}
