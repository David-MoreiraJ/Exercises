#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char **matriz;
    int T = 0;
    int A = 0;
    int B = 0;
    int contador = 0;
    int cont = 0;
    char compar;

    scanf("%d",&T);

    for(int i = 0; i < T; i++){
        scanf("%d %d",&A,&B);
        matriz = (char **) malloc (A * sizeof(char*));
        for(int j = 0; j < A; j++){
            matriz[j] = (char *) malloc((B + 1) * sizeof(char));
            scanf("%s",matriz[j]);
        }
        for(int l = 0; l < A; l++){
            for(int c = 0; c < B + 1; c++){
                contador++;
                if(matriz[l][c] == 'R'|| matriz[l][c] == 'W'){
                    contador--;
                    cont = l;
                    compar = matriz[l][c];
                    printf("Contador = %d\ncompar= %c\n",contador,compar);
                    l = A;
                    c = B;
                }
            }
        }
        if(contador % 2 == 0 && compar == 'R'){
            for(int l = 0; l < A; l++){
                for(int c = 0; c < B; c++){
                    if(){
                        if(c % 2 == 0 && matriz[l][c] != 'W'){
                            matriz[l][c] = 'R';
                        }
                        else if(c % 2 == 1 && matriz[l][c] != 'R'){
                            matriz[l][c] = 'W';
                        }
                        else if(matriz[l][c] == 'W' && c % 2 == 0 || matriz[l][c] == 'R' && c % 2 ==1){
                            printf("NO\n");
                        }
                    }
                }
            }
        }
        else if(contador % 2 == 0 && compar == 'W'){
            for(int l = 0; l < A; l++){
                for(int c = 0; c < B; c++){
                    if(c % 2 == 0 && matriz[l][c] != 'R'){
                        matriz[l][c] = 'W';
                    }
                    else if(c % 2 == 1 && matriz[l][c] != 'W'){
                        matriz[l][c] = 'R';
                    }
                    else if(matriz[l][c] == 'R' && c % 2 == 0 || matriz[l][c] == 'W' && c % 2 ==1){
                        printf("NO\n");
                    }
                }
            }
        }
        else if(contador % 2 == 1 && compar == 'R'){
            for(int l = 0; l < A; l++){
                for(int c = 0; c < B; c++){
                    if(c % 2 == 1 && matriz[l][c] != 'W'){
                        matriz[l][c] = 'R';
                    }
                    else if(c % 2 == 0 && matriz[l][c] != 'R'){
                        matriz[l][c] = 'W';
                    }
                    else if(matriz[l][c] == 'W' && c % 2 == 1 || matriz[l][c] == 'R' && c % 2 ==1){
                        printf("NO\n");
                    }
                }
            }
        }
        else if(contador % 2 == 1 && compar == 'W'){
            for(int l = 0; l < A; l++){
                for(int c = 0; c < B; c++){
                    if(c % 2 == 1 && matriz[l][c] != 'R'){
                        matriz[l][c] = 'W';
                    }
                    else if(c % 2 == 0 && matriz[l][c] != 'W'){
                        matriz[l][c] = 'R';
                    }
                    else if(matriz[l][c] == 'R' && c % 2 == 1 || matriz[l][c] == 'W' && c % 2 ==1){
                        printf("NO\n");
                    }
                }
            }
        }
        for(int l = 0; l < A; l++){
            printf("%s\n",matriz[l]);
        }
        printf("LOOP RESET\n");
    }
    return 0;
}
