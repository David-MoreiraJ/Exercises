#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int crescente(const void * a, const void * b) {
    const char *a1 = *(const char * const *)a;
    const char *b1 = *(const char * const *)b;
    size_t len1 = strlen(a1);
    size_t len2 = strlen(b1);
    if (len1 > len2){
        return 1;
    }
    if (len2 > len1){
        return -1;
    }
    return strcmp(a1,b1);
}

int main(void){

    int N = 0; 
    char **strings;

    scanf("%d",&N);
    
    strings = (char **) malloc(N * sizeof(char *)); // Cria as Linhas da matriz.

    for(int i = 0; i < N; i++){ // Cria colunas da matriz.
        strings[i] = (char *) malloc (101 * sizeof(char));
        scanf("%s", &strings[i]);
    }

    qsort(strings,N,sizeof(char *),crescente);
    
    for (int i = 0; i < N - 1; i++){
        if (strstr(strings[i + 1],strings[i]) == NULL){
            printf("NO\n");
            break;
        }
        if(i == N - 2){
            printf("YES\n");
            for (int j = 0; j < N; j++){
                printf("%s\n",strings[j]);
            }
        }
    }

    for (int i = 0; i < N; i++){
        free(strings[i]);
    }

    return 0;
}
