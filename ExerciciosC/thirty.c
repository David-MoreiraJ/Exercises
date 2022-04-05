#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    int A[3] [2];
    int B[3] [2];
    int C[3] [2];
    int i, j;
    int x, y;

    srand( (unsigned)time(NULL) );
    x, y = rand() % 101;

    for(i = 0; i < 3; i++) {
        for (j = 0; j <2; j++) {
            printf("Escreva o número para a matriz A, posição: [%d] [%d} --> \n",i ,j);
            scanf("%i", &A[x] [y]);
            srand( (unsigned)time(NULL) );
            x, y = rand() % 101;


        }
    }
     
    for(i = 0; i < 3; i++) {
        for (j = 0; j <2; j++) {
            printf("Escreva o número para a matriz B, posição: [%d] [%d] : --> \n", i, j);
            scanf("%i", &B[x] [y]);
            srand( (unsigned)time(NULL) );
            x, y = rand() % 101;


        }
    }

    for(i = 0; i < 3; i++) {
        for (j = 0; j <2; j++) {
            C [i] [j] = A[i] [j] + B[i] [j];
        }
    }
    for(i = 0; i < 3; i++) {
        for (j = 0; j <2; j++) {
            printf("%i ", C[i] [j]);
            if (j == 0 && i != 0) {
                printf(" \n");
            }
        }
    }
 
    
}
