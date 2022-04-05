#include <stdio.h>
#include <stdlib.h>


int decrescente(const void *a, const void * b) { // Ordena o vetor para facilitar a subtração.
    const int *i = a;
    const int *j = b;

    if(*i == *j){
        return 0;
    }

    if(*i < *j){
        return 1;
    }
    return -1;
}

int main(void){
    
    int n = 0;
    
    //printf("Quantas casas?\n");
    scanf("%d",&n);

    int estrada[n];

    for (int cont = 0; cont < n; cont++){ // Lê os números do vetor
        scanf("%d",&estrada[cont]);
    }

    qsort(estrada,n,sizeof(int),decrescente);
    
    int menor = estrada[0] - estrada[1]; // Descobre a menor diferença.
    for (int cont = 1; cont < n; cont++ ) {
        if (estrada[cont - 1] - estrada[cont] < menor) {
            menor = estrada[cont - 1] - estrada[cont];
        }
    }
    
    int outras = 0;

    for(int cont = 1; cont < n; cont++){ // Descobre quantas casas vem após a nova casa do amigo.
        if(estrada[cont - 1] - estrada[cont] == menor ) {
            outras++;
        }
    }


    printf("%d %d",menor,outras); // FIM

    return 0;
}

