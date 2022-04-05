#include <stdio.h>
#include <string.h>

int main (void){

    int l = 0;
    int c = 0;
    int cont = 0;

    scanf("%d %d",&l, &c);

    char y[l + 1][c];
    char vetor[l + 1];

    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            scanf("%s",&y[i][j]);
            cont++;
            if (i < 1){
                vetor[j] = y[i][j];
            }
        }
    }
    cont = 1;

    for(int i = 0; i < l; i++){
        cont = strcmp(y[i],vetor);
        printf("loop\n");
        if (cont == 0){
            printf("%d",i);
        }
    }
}
