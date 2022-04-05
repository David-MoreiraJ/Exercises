#include <stdio.h>

int main(void){

    int n = 0;
    int resultado = 0; 

    //printf("Qual o tamanho da sua matriz quadrada?\n");
    scanf("%d",&n);

    char tabuleiro[n][n];

    //printf("Agora é hora de atribuir os valores para linhas e colunas de sua matriz!\n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf(" %c",&tabuleiro[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (tabuleiro[0][j] == 0){
                for (int c = 0; c < n; c++){
                    tabuleiro[0][c] = 1;
                }
                resultado++;
            }
        }
    }
    
    printf("%d",resultado);
    return 0; 
}
