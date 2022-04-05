// Aluno: David Moreira
// Exercício: Aluguel de Bicicletas
#include<stdio.h>
int main (void) { // Código do programa.
    double A = 300; // Valor inicial de A.
    double B = 100; // Valor inicial de B.
    double C = 100; // Valor inicial de C.
    double matriz[3][3]; // Declaração da Matriz 3x3.
    int cont1, cont2, cont3, x = 0; // Declaração de variáveis auxiliares. 

    printf("Quantos dias você quer estimar? \n");
    scanf("%d", &x); // Leitura do número de dias que serão avaliados.
    
    for (cont1 = 0; cont1 < x; cont1++) { // Cálculo da estimativa.
        matriz[0][0] = A * 0.95;
        matriz[0][1] = B * 0.05;
        matriz[0][2] = C * 0.1;
        matriz[1][0] = A * 0;
        matriz[1][1] = B * 0.90;
        matriz[1][2] = C * 0.05;
        matriz[2][0] = A * 0.05;
        matriz[2][1] = B * 0.05;
        matriz[2][2] = C * 0.85;
        A = matriz[0][0] + matriz[0][1] + matriz[0][2];
        B = matriz[1][0] + matriz[1][1] + matriz[1][2];
        C = matriz[2][0] + matriz[2][1] + matriz[2][2];
    
        printf("Dia: %d A = %lf  B = %lf  C = %lf \n",cont1, A, B, C); // Escrevendo o valor de A, B e C.

    }
    printf("\n Sua matriz do dia %d: \n", x);

    for (cont1 = 0; cont1 < 3; cont1++) { // Escrevendo a Matriz na tela.
        if (cont1 == cont3 ) {
                printf("\n");
                cont3++;
            }
        for (cont2 = 0; cont2 < 3; cont2++) {
            printf("%0.3lf      ", matriz[cont1][cont2]);
        }
    }
}
