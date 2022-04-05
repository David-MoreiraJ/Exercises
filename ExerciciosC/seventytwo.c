#include <stdio.h>
#include <stdlib.h>

int main (void){

    int N;
    int *vetor;
    int cont = 0;

    scanf("%d",&N);

    vetor = (int *) malloc (N * sizeof(int));

    for(int i = 0; i < N; i++){
        scanf("%d",&vetor[i]);
    }

    for(int i = 0; i < N; i++){
        cont = 0;
        for(int j = 0; j < N; j++){
            if(vetor[i] == vetor[j]){
                cont++;
            }
            if(cont == 2){
                printf("NO\n");
                goto fim;
            }
        }
    }
    printf("YES\n");
fim:
    free(vetor);
    return 0;

}
