#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra[20];
    printf("Digite uma palavra: \n");
    scanf("%s" , palavra);

    printf("Palavra lida %s \n", palavra);
    
    int tamanho = strlen(palavra);
    printf("O tamanho da suas string � : %d \n", tamanho);

    return 0;   
}
    
