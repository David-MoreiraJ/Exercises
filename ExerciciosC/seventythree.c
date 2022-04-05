#include <stdio.h>
#include <stdlib.h>

int crescente(const void * a, const void * b){
    if (*(int*)a == *(int*)b){
        return 0;
    }
    else{
        if(*(int*)a < *(int*)b){
            return -1;
        }
        else{
            return 1;
        }
    }
}

int main (void) {

    int A, B, C = 0;
    int *X, *Y;
    
    scanf("%d %d",&A,&B);

    X = (int *) malloc(A * sizeof(int));
    Y = (int *) malloc(B * sizeof(int));

    for(int i = 0; i < A; i++){
        scanf("%d",&X[i]);
    }
    
    for(int i = 0; i < B; i++){
        scanf("%d",&Y[i]);
    }
    qsort(X, A, sizeof(int),crescente);
    qsort(Y, B, sizeof(int),crescente);

    int i = 0;
    int j = 0;
    C = abs(X[i] - Y[j]);
    while(C > 0){
        if(i == A || j == B){
            break;
        }
        if(X[i] > Y[j]){
            if(abs(Y[j] - X[i]) < C){
                C = abs(Y[j] - X[i]);
            }
            j++;
        }
        else if(Y[j] > X[i]){
            if(abs(Y[j] - X[i]) < C){
                C = abs(Y[j] - X[i]);
            }
            i++;
        }
    }

    printf("%d",C);

    free(X);
    free(Y);

    return 0;
}
