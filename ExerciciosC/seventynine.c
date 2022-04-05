#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// questao b

int compara(const void *A, const void *B){
  const char *a=*(const char**)A;
  const char *b=*(const char**)B;
  return strcmp(a,b);
}

int main (void){
    
    int N;
    char **array;
    char *compar;
    int aux = 0;

    scanf("%d",&N);

    array = malloc(N * sizeof(char *));
    compar = malloc(11 * sizeof(char));

    for (int i = 0; i < N; i++){
        array[i] = malloc(11 * sizeof(char));
        scanf("%s",array[i]);
        if(array[i][0] == '!'){
            aux++;
        }
    }
    qsort(array, N, sizeof(char*), compara);

   if( N - aux < 1){
       printf("satisfiable\n");
   }
    for(int i = aux; i< N; i++){
        for(int j = 0; j < aux + 1; j++){
            strcpy(compar,array[j]);
            memmove(compar, compar+1,strlen(compar));
            if(strcmp(array[i],compar) == 0){
                printf("%s\n",compar);
                i = N;
                break;
            }
        }
        if(i == N - 1){
            printf("satisfiable\n");
        }
    }

    for(int i = 0; i < N; i++){
        free(array[i]);
    }
    free(array);
    free(compar);

    return 0;
} 
