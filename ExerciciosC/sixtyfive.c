#include <stdio.h>
#include <stdlib.h>

int main (void){
    int T = 0;
    int N = 0;
    int *vetor;
    int sub = 0;
    int perfeito = 0;
    int igual = 0;

    scanf("%d",&T);

    for(int i = 0; i < T; i++){
        scanf("%d",&N);
        if(N > 300){
            printf("NO\n");
            continue;
        }
        vetor = (int *) malloc (N * sizeof(int));
        for(int j = 0; j < N; j++){
            scanf("%d",&vetor[j]);
        }
        for(int j = 0; j < N - 1; j++){
            sub = abs(vetor[i] - vetor[i + 1]);
            for(int k = 0; k < N; k++){
                if (sub == vetor[k]){
                    perfeito++;
                    break;
                }
            }
            for(int k = 0; k < N; k++){
                for(int j = 0; j < N; j++){
                    if(vetor[k] == vetor[j]){
                        igual++;
                    }
                }
            }
        }
        printf("Igual = %d\n",igual);
        if(perfeito > 0 && igual == N){
            printf("YES\n%d\n",N);
            for(int j = 0; j < N; j++){
                printf("%d ",vetor[j]);
            }
            printf("\n");
        }
        else{
            printf("NO\n");
        }
        free(vetor);
    }
    return 0; 
}
