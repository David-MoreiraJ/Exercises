#include <stdio.h>

int main(void)
{
    int i; 
    int vetor[20];
    int c = 0;
    int busca;
    int cont;

    for (i = 0; i <= 20; i++)
    {

        printf("Infome o valor da posi��o %d do vetor: \n", i);
        scanf("%d", &vetor[i]); }
   
    while(c == 0) {
        printf("Qual posi��o voc�e quer saber?");
        scanf("%d", &i);
        printf("O valor daquel posi��o �: %d \n", vetor[i]);

        printf("Voc� deseja descobrir mais algumas posi��o? 1 = N�O / 0 = SIM \n");
        scanf("%d", &c);
    } 
    printf("Insira um valor para buscar \n");
    scanf("%d", &busca);
    
    for (i = 0; i <= 20; i++) {
        if (busca == vetor[i]) {
            cont++ ; }}
    
    printf("%d foi encontrado, e foi encontrado em %d posi��es.",busca, cont);

    return 0;

    
}
    
