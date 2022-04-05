#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n = 0;
    float total = 0;
    
    printf("Quantos clientes são?\n");
    scanf("%d", &n);
 
    int cliente[n][2];
    int maior[n];
    int menor[n];
    
    for (int x = 0; x < n; x++){
        printf("Bom dia cliente n%d! Digite seu número de conta e saldo!\n",x);
        scanf("%d %d",&cliente[x][0], &cliente[x][1]);
        total += cliente[x][1];

     }

    total = (float) total / n;

    for (int x = 0; x < n; x++){
        if (cliente[x][1] > total)
            printf("Parabéns cliente número %d!, seu saldo (%d) é maior do que a média (%f)!\n\n",cliente[x][0],cliente[x][1],total);
        else if (cliente[x][1] < total)
            printf("Opa! Cliente número %d!, seu saldo (%d) é menor do que a média (%f)!\n\n",cliente[x][0],cliente[x][1],total);
        else
            printf("Olha, cliente número %d!, seu saldo (%d) é igual a média (%f)!\n\n",cliente[x][0],cliente[x][1],total); 
    }
    return 0;
}
