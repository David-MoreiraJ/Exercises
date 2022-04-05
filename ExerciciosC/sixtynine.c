#include <stdio.h>
#include <stdlib.h>

int crescente(const void * a, const void * b){
    if(*(int*)a == *(int*)b){
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
    return 0;
}

int main (void) {
    long long A = 0;
    long long B = 0;
    long long divisao = 0;
    int resto = 0;
    int *alunos;
    int *menores;
    int cont = 1;

    scanf("%lld %lld",&A, &B);
     alunos = (int *) malloc(A * sizeof(int));
     divisao = (B / A);
     resto = B % A;
     if(resto > 0){
         menores = (int *) malloc (A * sizeof(int));
     }
     //printf("Divisao = %lld\n Resto = %d\n",divisao,resto);

     for(int i = 0; i < A; i++){
         scanf("%d",&alunos[i]);
         if(resto > 0){
             menores[i] = alunos[i];
         }
     }
     if(resto > 0){
        qsort(menores,A,sizeof(int),crescente);
     }
     if (resto > 0){
        for(int i = 0; i < A; i++){
            for(int j = 0; j < resto; j++){
                if(menores[j] == alunos[i]){
                    printf("%lld\n",divisao + 1);
                    cont++;
                    break;
                }
            }
            if(cont < 1){
                printf("%lld\n",divisao);
            }
            cont = 0;
        }
     }
     else{
         for(int i = 0; i < A; i++){
             printf("%lld\n",divisao);
         }
     }
     free(alunos);
     if(resto > 0){
         free(menores);
     }
    return 0;
}
