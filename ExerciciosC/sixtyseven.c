#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    int T = 0;
    int A = 0;
    int B = 0;
    char **matriz;
    char **mirror;
    char erro = 0;

    scanf("%d",&T);
    for(int i = 0; i < T; i++){ // Loop principal
        scanf("%d %d",&A,&B);
        matriz = (char **) malloc (A * sizeof(char *));
        mirror = (char **) malloc (A * sizeof(char *));
        for(int j = 0; j < A; j++){ // Alocação
            matriz[j] = (char *) malloc((B + 1) * sizeof(char));
            mirror[i] = (char *) malloc((B + 1) * sizeof(char));
            scanf("%s",matriz[j]);
        }
        for(int l = 0;l < A; l++){ // Espelhamento
            strcpy(mirror[l],matriz[l]);
        }/*
        for(int l = 0; l < A; l++){ // LOOP 1
            for(int c = 0; c < B; c++){
                if(c % 2 == 0){
                    if(matriz[l][c] == '.'){
                        matriz[l][c] = 'R';
                    }
                    else if(matriz[l][c] == 'W'){
                        erro++;
                        break;
                    }
                }
            }
        }
        for(int l = 0; l < A; l++){ // LOOP 2
            for(int c = 0; c < B; c++){
                if(c % 2 == 0){
                    if(mirror[l][c] == '.'){
                        mirror[l][c] = 'W';
                    }
                    else if(mirror[l][c] == 'R'){
                        erro++;
                        break;
                    }
                }
            }
        }*/
        if(erro == 2){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
