#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char **matriz;
    char **mirror;
    int T = 0;
    int A = 0;
    int B = 0;
    int cont = 0;
    char compar;
    char anticompar;

    scanf("%d",&T);

    for(int i = 0; i < T; i++){
        scanf("%d %d",&A,&B);
        matriz = (char **) malloc (A * sizeof(char*));
        mirror = (char **) malloc ( A * sizeof(char*));
        for(int j = 0; j < A; j++){
            mirror[j] = (char *) malloc((B + 1) * sizeof(char));
            matriz[j] = (char *) malloc((B + 1) * sizeof(char));
            scanf("%s",matriz[j]);
        }
        for(int l = 0; l < A; l++){
            for(int c = 0; c < B + 1; c++){
                if(matriz[l][c] == 'R'|| matriz[l][c] == 'W'){
                    if(c % 2 == 0 && l % 2 == 0 || c % 2 == 1 && l % 2 == 1){
                        compar = matriz[l][c];
                        if(matriz[l][c] == 'R'){
                            anticompar = 'W';
                        }
                        else{
                            anticompar = 'R';
                        }
                        break;
                    }
                    else if(c % 2 == 0 && l % 2 == 1){
                        if(matriz[l][c] == 'R'){
                            compar = 'W';
                            anticompar = 'R';
                        }
                        else{
                            compar = 'R';
                            anticompar = 'W';
                        }
                        break;
                    }
                    else if(c % 2 == 1 && l % 2 == 0){
                        if(matriz[l][c] == 'W'){
                            compar = 'R';
                            anticompar = 'W';
                        }
                        else{
                            compar = 'W';
                            anticompar = 'R';
                        }
                        break;
                    }
                    l = A;
                    c = B;
                }
            }
        }
        for(int l = 0; l < A; l++){
            for(int c = 0; c < B; c++){
                if(c % 2 == 0 && l % 2 == 0){
                    mirror[l][c] = compar;
                }
                else if(c % 2 == 1 && l % 2 == 1){
                    mirror[l][c] = compar;
                }
                else{
                    mirror[l][c] = anticompar;
                }
            }
        }
        for(int l = 0; l < A; l++){
            for(int c = 0; c < B + 1; c++){
                if(matriz[l][c] != mirror[l][c] && matriz[l][c] != '.'){
                    printf("NO\n");
                    cont++;
                    l = A;
                    c = B + 1;
                }
            }
        }
        if(cont < 1){
            printf("YES\n");
            for(int l = 0; l < A; l++){
                printf("%s\n",mirror[l]);
            }
        }
        cont = 0;
    }
    for(int l = 0; l < A; l++){
        free(matriz[l]);
        free(mirror[l]);
    }
    free(matriz);
    free(mirror);

    return 0;
}
