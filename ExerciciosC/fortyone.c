#include <stdio.h>

void zera_vetor(int* vetor, int n)
{
    int i;
    for (i = 0; i< n ; i++)
    {
        vetor[i] = 0;
    }
    return;
}

int main() {
    int t = 0;
    int n = 0;
    int contador1 = 0;
    int contador2 = 0;
    int contador3 = 0;

    //printf("Quantas operações?\n");
    scanf("%d",&t);
    int resultado[t];
   
    for (int cont = 0; cont < t; cont++){ // Loop principal
        //printf("cont = %d. Qual o tamanho do vetor?\n",cont);
        scanf("%d",&n);
        int vetor[n];

        zera_vetor(vetor, n);

        for (int cont1 = 0; cont1 < n; cont1++) {//Lê os valores do vetor
            scanf("%d",&vetor[cont1]);
            if (vetor[cont1] == 0) {
                contador1 += 1;
            }
            contador2 += vetor[cont1];
        }   
        contador2 += contador1;
        
        if (contador2 == 0){
            contador1 += 1;
        }
        resultado[contador3] = contador1;
        //printf("(%d)\n",contador1);
        contador1 = 0;
        contador2 = 0;
        contador3 += 1;
    }
    for (int cont = 0; cont < t; cont++){ // Loop principal
        printf("%d\n",resultado[cont]);
    }
     
    return 0;
}
