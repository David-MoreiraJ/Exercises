#include <stdio.h>
#include <stdlib.h>

int main (void){
    
    int i, a;
    int vetor[i];

    printf("Qual o tamanho do seu vetor?\n");
    scanf("%d",&a);

    for (i = 0; i < a; i++) {
        scanf("%d ", &vetor + i);
        printf("Você digitou: %d", *(vetor + i));
    }
    for (i = 0; i < a; i++) {
        printf("%d ", *(vetor + i)); 
    }

    return 0;

}


