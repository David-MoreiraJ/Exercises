#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// questao b
int main (void) {

    int N;
    char **array;
    char *compar;
    int aux;

    scanf("%d",&N);

    array = malloc(N * sizeof(char *));
    compar = malloc(11 * sizeof(char));

    for (int i = 0; i < N; i++){
        array[i] = malloc(11 * sizeof(char));
        scanf("%s",array[i]);
    }

    for (int i = 0; i < N; i++){
        if(array[i][0] == '!'){
            strcpy(compar,array[i]);
            memmove(compar, compar+1,strlen(compar));
            for(int j = 0; j < N; j++){
                aux = strcmp(array[j],compar);
                if(aux == 0){
                    printf("%s\n",compar);
                    i = N;
                    break;
                }
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
