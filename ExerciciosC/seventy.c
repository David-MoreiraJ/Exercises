#include <stdio.h>
#include <stdlib.h>

int crescente(const void * a, const void * b) {
    if (*(int*)a == *(int*)b){
        return 0;
    }
    else{
        if(*(int*)a < * (int*)b){
            return -1;
        }
        else{
            return 1;
        }
    }
    return 0;
}
int main (void) {

    int T = 0;
    int N = 0;
    int z = 0;
    int cont = 0;
    int *A;
    int *ordena;
    int *sub;

    scanf("%d",&T);

    for(int i = 0; i < T; i++){
        printf("Iniciando..\n");
        scanf("%d",&N);
        A = (int *) malloc (300 * sizeof(int));
        ordena = (int *) malloc (300 * sizeof(int));
        sub = (int *) malloc (N * sizeof(int));
        for(int j = 0; j < N; j++){
            scanf("%d",&A[j]);
            ordena[j] = A[j];
        }
        qsort(ordena,N,sizeof(int),crescente);
        for(int j = 0; j < N - 1; j++){ // VERIFICA SE HÁ NUMEROS IGUAIS
            if(ordena[j + 1] == ordena[j]){
                printf("NO\n");
                break;
            }
        }
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                z = abs(A[j] - A[k]);
                printf("Z = %d\n",z);
                for(int p = 0; p < N + 1; p++){
                    if(z == A[p]){
                        cont++;
                    }
                    if(p == N && cont < 1){
                        A[p + 1] = z; 
                        cont = 0;
                        N++;
                    }
                    if(p == N){
                        cont = 0;
                    }
                }
            }
        }
        for(int j = 0; j < N; j++){
            printf("%d ",A[j]);
        }
    }

    printf("FIM\n");

    return 0;
}
