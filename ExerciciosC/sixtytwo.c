#include <stdio.h>

int main (void){

    struct pessoa{
        char nome[20], rua[20];
        int idade, numero;
    };

    struct pessoa p[1];
    printf("Defina seu nome, nome da sua rua, sua idade e o número da sua casa.\n");
    scanf("%s %s %d %d",p[0].nome,p[0].rua,&p[0].idade,&p[0].numero);

    printf("%s\n%s\n%d\n%d",p[0].nome,p[0].rua,p[0].idade,p[0].numero);

    return 0;
}
