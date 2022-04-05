#include <stdio.h>
#include <stdlib.h>

int crescente(const void *a, const void *b){
    if(*(int*)a == *(int*)b){
        return 0;
    }
    else{
        if (*(int*)a < *(int*)b){
            return -1;
        }
        else{
            return 1;
        }
    }
}

int potencia(int base, int exp){
    int resultado = 1;
    while (exp)
    {
        if (exp % 2)
           resultado *= base;
        exp /= 2;
        base *= base;
    }
    return resultado;
}

int main(void){
    long long a, i = 0;
    int base = 2;
    int expoente = 2;
    long long *v;
    long long cont = 0;

    scanf("%lld",&a);

    v = (long long *) malloc (a * sizeof(long long));
    if(v == NULL){
        printf("Sem memoria!!\n");
        exit(1);
    }
    while(base * base < a){
        v[cont] = potencia(base,expoente);
        if(v[cont] > a){
            base++;
            expoente = 2;
            continue;
        }
        expoente++;
        cont++;
    }
    v[cont] = 0;
    qsort(v,cont,sizeof(long long),crescente);
    cont = 0;
    while (v[i] > 1){
        //printf("%d ",v[i]);
        if(v[i] != v[i + 1]){
            cont++;
        }
        i++;
    }
    a = abs(cont - a);
    printf("%lld",a);

    free(v);
    return 0;
}
