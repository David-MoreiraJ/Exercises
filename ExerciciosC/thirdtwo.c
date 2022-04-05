#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    :
    int mat[6][10], i, j, numAleatorios;

    srand(time(NULL));

    // gera os números aleatórios e imprime a matriz
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 10; j++) {
            numAleatorios = (rand() % 999) + 1;
            mat[i][j] = numAleatorios;
            printf("%3d | ", mat[i][j]); // %3d é para usar 3 casas para mostrar o número
        }
        printf("\n");
    }

    printf("\n");
  
    system("PAUSE"); 
    return 0;
}
