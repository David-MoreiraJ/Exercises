#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int N = 4;
    int T = 0;
    char **matriz;
    int cond = 0;

    // A CELULAS NA PRIMEIRA LINHA
    // B CELULAS NA PRIMEIRA COLUNA
    // C CELULAS NA ULTIMA LINHA
    // D CELULAS NA ULTIMA COLUNA

    scanf("%d",&T);

    matriz = (char **) malloc(T * sizeof(char *)); // Linhas.

    for(int i = 0; i < T; i++){
        matriz[i] = (char *) malloc(N * sizeof(char)); // Colunas
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < T; j++){
            scanf("%s",&matriz[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < T; j++){
            if(j == 1 && matriz[i][j] >= N){
                cond++;
            }
            if(j == 2 && matriz[i][j]){
            }
        }
    }

   return 0;
}

