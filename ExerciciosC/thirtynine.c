#include <stdio.h>
#include <stdlib.h>


int crescente(const void *a, const void * b) {
    if (*(int*) a < *(int*)b)
        return 1;
    else
        return -1;
}

int main(void){
    
    int aux = 0;
    int n = 0;
    int i = 0;
    int menor = 0;
    int seguinte = 0;
    
    //printf("Quantas casas?\n");
    scanf("%d",&n);

    int q[n];
    int k[n];

    for (int cont = 0; cont < n; cont++) {
        scanf("%d", &q[cont]);
        k[cont] = q[cont];
    }

    qsort(q,n,sizeof(int),crescente);
    
    //for (int cont = 0; cont < n; cont++) {
        //printf("%d  ",q[cont]);
    //}
    for (int cont = 1; cont < n; cont++){
        if (q[cont] == q[1]){
            menor = q[0] - q[1];
            seguinte = q[1];
        }   
        if (q[cont] >= q[1]){ 
            if (menor > q[cont - 1] - q[cont]) {
                menor =  q[cont - 1] - q[cont];
                seguinte = q[cont];
            }
        }
    }

    for (int cont =0 ; cont < n; cont++){
        if (seguinte - k[cont] == menor) {
            k[cont] = seguinte;
            i == cont;
        }
    }

    for (int cont = 0; cont < n; cont++) {
        if (k[cont] == seguinte) {
            for (int i = cont; i < n; i++){
                aux++;
            }
        }
    }
    aux--;
    printf("\nSeguinte = %d\n",seguinte);

    printf("%d ",menor);
    printf("%d ",aux);
 
  return 0; 
}
