#include <stdio.h>

int main(void)
{
    int dias = 0;
    int dinheiro = 0;
    int menor = 0;
    int botao = 0;
    int soma = 0;
    
    printf("Por quantos dias você sacará o dinheiro? \n");
    scanf("%d", &dias);
    
    printf("Qual valor você possui na conta? \n");
    scanf("%d", &dinheiro);
    
    while (dias > 0) {
        printf("Quanto de dinheiro você quer sacar / depositar ? \n");
        scanf("%d", &soma);
        dinheiro += soma;
        soma = 0;
        if (dinheiro < menor) {
            menor = dinheiro;
            
        }
        if (botao == 0) {
            menor = dinheiro;
            botao++;
        }
        dias--;
    }
    
    printf("O menor valor durante o período foi : %d. \n", menor);
    
    return 0;
    


    
}
    
