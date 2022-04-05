#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    char *palavra;
    char *repete;
    char **tokens;
    int contador = 0;
    int aux = 0;
    int maior = 0;
    int tamanho = 0;

    palavra = malloc (500000 * sizeof(char));
    tokens = malloc (500000 * sizeof(char*));
    repete = malloc (3 * sizeof(char));

    fgets(palavra,500000,stdin);

    for(int i = 0; i < 500000; i++){
        if(palavra[i + 2] == 0 ){
            break;
        }
        tokens[i] = malloc (3 * sizeof(char));
        tokens[i][0] = palavra[i];
        tokens[i][1] = palavra[i + 1];
        tokens[i][2] = '\0';
        tamanho++;
        //printf("%s ",tokens[i]);
    }
    //printf("%d", tamanho);

    for(int i = 0; i < tamanho; i++){
        contador = 0;
        for(int j = 0; j < tamanho; i++){
            aux = strcmp(tokens[i],tokens[j]);
            printf("%d\n",aux);
            if(aux == 0){
                contador++;
            }
            if(contador > maior){
                maior = contador;
                strcpy(repete,tokens[i]);
            }
        }
    }
    //printf("maior = %d, string = %s\n",maior,repete);

    
    free(palavra);
    free(tokens);
    return 0;
}
