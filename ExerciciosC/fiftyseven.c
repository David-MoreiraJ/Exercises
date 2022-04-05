#include <stdio.h>

int main (void){
    FILE *arquivo = fopen("macaco.txt","w+");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 0;
    }

    int a;
    fscanf(stdin, "%d", &a);
    fprintf(arquivo, "Hello world\n");
    fprintf(arquivo, "Número lido: %d\n", a);

    return 0;
}
