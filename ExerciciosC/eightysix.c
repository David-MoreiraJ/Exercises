#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char string[12];
} estrutura;
 
int compara(const void *a, const void *b) {
    return strcmp(((estrutura *)a)->string, ((estrutura *)b)->string);
}
 
int main(void){

    int N;
    int *b;
    int *pivo;
    char *X;
    char aux;
    estrutura *a;

    X = malloc(27 * sizeof(char));
    a = malloc (500000 * sizeof(char));
    b = malloc(27 * sizeof(int));
    pivo = malloc(27 * sizeof(int));

    scanf("%s",X);
    scanf("%d",&N);

    for (int i = 0; i < N; i++) {
        scanf("%s", a[i].string);
    }
    for (int i = 0; i < 26; i++) {
        b[X[i] - 'a'] = i;
        pivo[i] = X[i] - 'a';
    }
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < strlen(a[i].string); j++) {
            aux = 'a' + b[a[i].string[j] - 'a'];
            a[i].string[j] = aux;
        }
    }

    qsort(a, N, sizeof(estrutura), compara);
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < strlen(a[i].string); j++) {
            aux = 'a' + pivo[a[i].string[j] - 'a'];
            a[i].string[j] = aux;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", a[i].string);
    }

    free(b);
    free(pivo);
    free(X);
    free(a);

    return 0;
}
