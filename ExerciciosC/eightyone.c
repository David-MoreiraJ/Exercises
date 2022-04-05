#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// questao d
/*int crescente(const void * a, const void *b){
    if(*(int*)a == *(int*)b){
        return 0;
    }
    else{
        if (*(int*)a < *(int*)b){
            return -1;
        }
        else{
            return 1;
        }
    }
}*/
int compara(const void *one, const void *two) {
    const char *iOne = *(const char * const *)one;
    const char *iTwo = *(const char * const *)two;
    size_t len1 = strlen(iOne);
    size_t len2 = strlen(iTwo);
    if (len1 > len2)
        return +1;
    if (len2 > len1)
        return -1;
    return strcmp(iOne, iTwo);
}
int main (void) {

    char *S;
    int *numero;
    char **nomes;
    int N;
    char *aux;
    int **posicao;

    S = malloc(27 * sizeof(char));
   
    scanf("%s",S);
    scanf("%d",&N);

    nomes = malloc(N * sizeof(char *));
    numero = malloc(N * sizeof(int));
    posicao = malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++){
        nomes[i] = malloc(11 * sizeof(char));
        scanf("%s",nomes[i]);
    }

    //qsort(nomes,N,sizeof(char*),compara);

    for(int i = 0; i < N; i++){
        numero[i] = strlen(nomes[i]);
        for(int j = 0; j < numero[i]; j++){
            printf("Limite = %d\n",numero[i]);
            aux = strchr(S,nomes[i][j]);
            posicao[i] = malloc(numero[i] * sizeof(int));
            posicao[i][j] = (int)(aux - S);
            printf("posicao[%d][%d] = %d ",i,j,posicao[i][j]);
        }
        printf("\n");
    }

    //qsort(posicao,N,sizeof(int*),crescente);

    for(int i = 0; i < N; i++){
        numero[i] = strlen(nomes[i]);
        for(int j = 0; j < numero[i]; j++){
            printf("%d ",posicao[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < N; i++){
        free(nomes[i]);
    }
    free(nomes);
    free(S);

    return 0;
}
