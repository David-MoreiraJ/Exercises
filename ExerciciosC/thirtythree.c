#include <stdio.h>
#include <stdlib.h>

int VerificaOrd(const void *a, const void *b) {
    const int *x = a, *y = b;
    /*int cont = 0;
    int comparar[b];

    while(cont < a) {
        comparar[cont] = x[cont];
        cont++;
    }*/

    
    if(*x < *y){
        return -1;
        
    if(*x > *y){
        return 1;
    }

        
    //return 0;
}

int main(void)
{
    int x = 0;
    int cont = 0;
    int resultado = 4;

    printf("Qual o tamanho do seu vetor? \n");
    scanf("%d",&x);

    int vetor[x];
    int comparar[x];

    while (cont < x) {
        printf("Qual valor você quer atribuir a posição %d do seu vetor?",cont);
        scanf("%d",&vetor[cont]);
        comparar[cont] = vetor [cont];
        cont++;
    }
    
    cont = 0;

    printf("O seu vetor é: [ ");

    while (cont < x) {
    printf("%d, ",vetor[cont]);
    cont++;
    }
    
    cont = 0;

    printf("]\n");
    
    qsort(vetor, x,sizeof(vetor[0]),VerificaOrd);

    while (cont < x) {
    printf("%d, ",vetor[cont]);
    cont++;
    }

    cont = 0;

    return 0;
}
