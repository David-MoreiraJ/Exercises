#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int testes = 0;
    int n = 0;
    int contador = 0;
    int soma = 0;
    int mult = 1;

    printf("Quantos testes serão realizados:?\n");
    scanf("%d",&testes);
    int resultado[testes];

    for (int cont1 = 0; cont1 < testes; cont1++){ //Loop principal
        printf("LOOP principal = %d -- Qual o tamanho do seu vetor?",cont1);
        scanf("%d",&n);
        int vetor[n];

        for (int cont2 = 0; cont2 < n; cont2++){// Loop que lê os valores do vetor[n].
            scanf("%d",&vetor[cont2]);
        }
        for (int cont3 = 1; cont3 < n + 1; cont3++){ // loop que multiplica e soma o vetor[n]
            soma += vetor[cont3 - 1] + vetor[cont3];
            mult = mult * vetor[cont3];
            printf("\n Rodando loop cont3 = %d\n",cont3);
            if (cont3 > n - 1 && mult < 1 && soma < 1){
                for (int cont4 = 0; cont4 < n; cont4++){ // Loop que aumenta em + 1 o vetor[n]
                    vetor[cont4]++;
                    printf("\n Rodando IF\n");
                }
                resultado[contador]++;
                printf("\nSomando ao contador!\n");
                cont3 = 0;
            }
        }
        cont1++;
    }

    printf("\n");
    for(int cont1 = 0; cont1 < testes; cont1++) {
        printf("%d  ",resultado[cont1]);
    }


  return 0; 
}
