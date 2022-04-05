#include<stdio.h>
#include<stdlib.h>

int main (void){

    int *p;
    p = (int *) malloc(5*sizeof(int));

    if (p == NULL){
        printf("Pane no sistema!\n");
        exit(1);
    }
    for (int i = 0; i < 5; i++){
        printf("Digite um valor para a posição %d\n",i);
        scanf("%d",&p[i]);
        printf("%d\n",p[i]);
    }

    free(p);

    return 0;
}
