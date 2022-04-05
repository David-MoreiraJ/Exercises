#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include <unistd.h> Declaração de biblioteca EXCLUSIVA do Linux, para uso da função SLEEP. Caso esteja no Linux, Retire o comentário desta Biblioteca e comente a biblioteca abaixo.
#include <Windows.h>

int x, y, z;

// Primeira função. Atribui valores aleatórios as matrizes.

void ler(float vetor1[] [z],int x,float vetor2[] [y], int z) {
    int cont1, cont2, cont3 = 0;
    float k = 10.0;
    srand(0);

    x++;
    for (cont1 = 0; cont1 < x; cont1++) {
        for (cont2 = 0 ; cont2 < z; cont2++) {
            vetor1[cont1][cont2] = (float)rand()/RAND_MAX*10.0-0.0;
        }
    }
    x--;

    sleep(1);

   cont1, cont2, cont3 = 0;
   srand(0);
    z++;
    srand(time(NULL));
    for (cont1 = 0; cont1 < z; cont1++) {
        for (cont2 = 0 ; cont2 < y; cont2++) {
            vetor2[cont1][cont2] = (float)rand()/RAND_MAX*10.0-0.0;
        }
    }
    z--;

}

//Segunda função. Exibe as matrizes para o usuário.

void print(float vetor1[] [z],int x,float vetor2[] [y], int z) {
    
    printf("\n");
    printf("Sua primeira matriz:\n");

    int cont1, cont2, cont3 = 0;
   x++; 
    for (cont1 = 0; cont1 < x; cont1++) {
            if (cont1 != cont3){
                printf("\n");
                cont3++;
 
        for (cont2 = 0 ; cont2 < z; cont2++) {
            printf("%0.2f   ", vetor1[cont1][cont2]);
            }
        }
    }
    x--;

    printf("\n\n");
    printf("Sua segunda matriz:\n");

    cont1, cont2, cont3 = 0;
    z++;
    for (cont1 = 0; cont1 < z; cont1++) {
            if (cont1 != cont3){
                printf("\n");
                cont3++;
 
        for (cont2 = 0 ; cont2 < y; cont2++) {
            printf("%0.2f   ", vetor2[cont1][cont2]);
            }
        }
    }
    z--;
}

//Última função. Calcula e demonstra o produto das Matrizes.

void calc(float vetor1[] [z],int x,float vetor2[] [y], int z,float vetor3[x][y]) {
    int cont1, cont2, cont3 = 0;
    int k = 0;
    x++;
    //float vetor3[x][y];
    
    printf("\n");
    printf("Sua matriz final \n");

    for (cont1 = 0; cont1 < x; cont1++) {
        for (cont2 = 0; cont2 < y; cont2++) {
            for (k = 0; k < z; k++) {
                vetor3[cont1][cont2] = vetor3[cont1][cont2] + vetor1[cont1][k] * vetor2[k][cont2];
                }
        }
    }
    
    for (cont1 = 0; cont1 < x; cont1++) {
            if (cont1 != cont3){
                printf("\n");
                cont3++;
 
        for (cont2 = 0 ; cont2 < y; cont2++) {
            printf("%0.2f   ", vetor3[cont1][cont2]);
            }
        }
    }
}

//Função principal. Capta os dados do usuário.

int main (void) {
    srand(time(NULL));

    char nome[40];
    int a = 0;

    printf(" Diga o seu Login (FORMATO: Nome.Sobrenome@cefet) : \n");
    scanf("%s", nome);
    
    while(nome[x] != '.') {
        x++;       
    }
    while(nome[y] != '@') {
        y++;
    }
    y = (y - x) - 1;
    printf("Seu Primeiro nome tem %d letras. \n",x);
    
    printf("Seu sobrenome tem %d letras! \n\n", y);

    printf("Seu nome completo tem %d letras! \n", x + y);
    z = x + y;

    float vetor1[x][z];
    float vetor2[z][y];
    float vetor3[x][y];

    //As funções são chamadas e efetuam suas respectivas operações.

    ler(vetor1,x,vetor2,z);
    print(vetor1,x,vetor2,z);
    calc(vetor1,x,vetor2,z,vetor3);
}
