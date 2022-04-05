#include <stdio.h>
#include <stdlib.h>

int VerificaOrd(int *vetor1,int i, int *vetor2){ // Ao passar um vetor para uma função, é necessário acrescentar o * para ele ser passado como ponteiro.
    
    for (int cont = 0; cont < i; cont++){
        if (vetor1[cont] != vetor2[cont]) { // Compara o vetor ordenado com o vetor normal.
            printf("Vetores diferentes! \n");

            return 1;
        }
    }

    return 0;
}

int main(void){
    
    int cont, cont2, aux, n = 0;
    
    printf("Qual o tamanho do seu vetor?\n");
    scanf("%d",&n); // Lê o tamanho do vetor.

    int vetor[n];
    int comparação[n];

    for( cont = 0; cont < n; cont++ ){  // Recebe os valores do vetor.
        printf("\n Digite um valor: ");
        scanf("%d",&vetor[cont]);
        comparação[cont] = vetor[cont]; // Passa os valores do vetor original para o vetor que será usado na comparação. Nesse momento, eles são iguais.
        }

    for( cont = 0; cont < n; cont++ ){ //Loop maluco que ordena o vetor VETOR em ordem crescente, enquanto isso, o vetor COMPARAÇÃO continua na ordem digitada pelo usuário.
        for( cont2 = cont + 1; cont2 < n; cont2++ ){
            if( vetor[cont] > vetor[cont2] ){
                aux = vetor[cont];
                vetor[cont] = vetor[cont2];
                vetor[cont2] = aux;
                }
            }
    }

    printf("Seu array Ordenado:\n [  ");
        for(cont = 0;cont < n;cont++){
           printf("%d  ",vetor[cont]); // Exibe o Array que foi ordenado.
        }
        printf("]\n");

        printf("Seu array normal:\n [  ");{
            for(cont = 0;cont < n;cont++)
            printf("%d  ",comparação[cont]);  // Exibe o Array Normal.
        }
        printf("]\n");
        
        VerificaOrd(vetor,n,comparação); // Chama a função. Ao passar um vetor para uma função, é necessária essa formatação, "nome do vetor", "tamanho do vetor". Já que o meu vetor COMPARAÇÃO é do mesmo tamanho do meu vetor VETOR, só precisei passar o tamanho uma vez.

       return 0;
}


