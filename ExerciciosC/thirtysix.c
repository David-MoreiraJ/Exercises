#include <stdio.h>
#include <stdlib.h>

void one(int *vetor, int n, int *escolaridade, int m, int *total, int z,int *maior, int q, double *média, int g){
    
    int i = 0;
    int j = 0;

    while (i < 50) {
        printf("%dº entrevistado - qual é a sua idade?\n", i);
        scanf("%d", vetor + i);
        
        printf("qual o seu nível de escolaridade? \n [0] - == ENCERRAR == \n [1] - analfabeto \n [2] - primeiro grau \n [3] - segundo grau \n [4] superior \n [5] - mestrado \n [6] - doutorado \n [7] - outros.\n");
        scanf("%d", &j);
        if ( j == 0){
            i = 50;
        }

        if (*(vetor + i) > *(maior + j)){
            *(maior + j) = *(vetor + i);
        }
        *(escolaridade + j) += 1;
        *(total + j) += *(vetor + i);
        *(média + j) = *(total + j) / *(escolaridade + j);

        for (int cont = 1; cont < 8; cont++) {
            printf("%d | %d | %d | %lf \n", *(total + cont), *(escolaridade + cont ), *(maior + cont), *(média + cont));
        }

        i++;
    }
}

void two(double *média, int z,int *maior, int q){

    for (int i = 1; i < 8; i++) {
        printf("GRUPO %d:\n Idade média: %lf\n Maior idade: %d\n\n",i, *(média + i), *(maior + i));
    }
}

int main (void){
    
    int j = 0;
    int i = 0;
    int *vetor;
    int *escolaridade;
    int *total;
    int *maior;
    double *média;

    vetor = malloc (50 * sizeof(int));
    escolaridade = malloc (8 * sizeof(int));
    total = malloc (8 * sizeof(int));
    maior = malloc (8 * sizeof(int));
    média = malloc (8 * sizeof(double));

   one(vetor, 50, escolaridade, 8, total, 8,maior, 8, média, 8);
   two(média, 8,maior, 8);

   return 0;

}


