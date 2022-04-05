#include <stdio.h>

int main(void)
{
    int matriz [3][3];

    for (int coluna = 0; coluna < 3; ++coluna) {
        for(int linha = 0; linha < 3; ++linha) {
            scanf("%d", &matriz[coluna][linha]);
        }}
    for (int coluna = 0; coluna < 3; ++coluna) {
        int soma = 0;
        for (int linha = 0; linha < 3; ++linha) {
            soma += matriz[coluna] [linha];}
        
        printf("Coluna %d: %d\n", coluna, soma);

    }

    return 0;   
}
    
